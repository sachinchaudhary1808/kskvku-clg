a <- read.csv(file.choose('read.csv'))
colnames(a)
print(a[2:3])
a$Age
print(a[a$Marks < 90,])
a[1:2,c("Firstname","Marks")]
colnames(a)[1] <-"Firstname"
colnames(a)[2] <-"Age"
colnames(a)[3] <-"Marks"
a
