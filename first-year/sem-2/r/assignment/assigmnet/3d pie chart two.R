install.packages("plotrix")
library(plotrix)
subjects <- c("C","WDP","IT","IKS","Communication Skills","Math")
marks <- c(80,85,90,86,80,54)  
percente <- (marks / sum(marks)) * 100
labels = paste(subjects,paste0(round(percente,1),"%"))

pie3D(
   percente,
   labels = labels,
  col = rainbow(6) ,
  main="pie chart of subjects marks",
#  explode = 0.1
)

