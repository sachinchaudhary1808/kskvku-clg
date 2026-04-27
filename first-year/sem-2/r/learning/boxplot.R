box <- c(40,45,50,55,60,65,70,75,80,100,150)
boxplot(box,col="red",main="boxplot example")

hours <- c(6,5,4,3,2,1)
marks <- c(35,40,50,60,65,70)

# scatter plot
plot(hours,marks,
     main = "mobile  vs marks",
     xlab = "mobile hours",ylab="Marks",
     col = "blue", pch = 19)

?plot
