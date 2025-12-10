png("plot.png", width = 800, heigh = 600)

#-------------------------------------------
x <- c(1, 2, 3, 4, 5)
y <- c(2, 4, 3, 7, 5)
plot(x, y, type = "b", main = "Kharab Line Chart")

gunakar <- function(a, b) {
  a * b
}
#-------------------------------------------
dev.off()

