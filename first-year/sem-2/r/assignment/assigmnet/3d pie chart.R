install.packages("plotrix")
library(plotrix)

values <- c(25,30,15,10,20)
labels <- c("A","B","C","D","E")
colors <- c("red","blue","green","yellow","purple")


pie3D(values,labels = labels,col=colors,main="3D Pie Chart",explode=0.1)

