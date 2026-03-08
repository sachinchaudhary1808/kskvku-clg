student <- read.csv("students_large.csv",header=TRUE)
marks <- read.csv("marks_large.csv",header=TRUE)
attendance <- read.csv("attendance_large.csv",header=TRUE)

merge <- merge(student,marks,by="ID")
merge <- merge(merge,attendance,by="ID")
print(merge)


highAchiver <- merge[merge$Marks > 80 & merge$Attendance > 85 ,]
print(highAchiver)

merge <- merge[order(merge$Marks,decreasing = TRUE),]
print(selected)

selected <- merge[c("Name","City","Marks")]
print(selected)

low <- mean(merge$Marks)
print(low)

city_mark <- by(selected$Marks,selected$City,FUN = function(x) mean(x))
print(city_mark)

merge$Result <- ifelse(merge$Marks >= 80,"Pass","Fail")
print(merge)

write.csv(merge,"final_result2.csv",row.names = FALSE)

head(merge, n = 5L)

