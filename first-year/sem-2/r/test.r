v <- c(1,2,3,4,5,6,7,8,9,10)
even <- v[v%%2 == 0]
odd <- v[v%%2 == 1]
print(even)
print(odd)

o <- c(5,2,9,1,7,3)
sort(o,decreasing = TRUE)

v <- c(10,20,30,40,50,60)
print(v[c(1,3,5)])

v <- c(10,20,30,40,50,60)
print(v[-c(2,4)])

temp <- c(25,28,31,35,22,30,33,18,40)
temp = temp[temp < 30]
print(temp)

v1 <- c(10,20,30,40,50)
v2 <- c(1,2)

result <- v1+v2
print(result)

a <- 10
typeof(a)

b <- "hello"
typeof(b)

c <- 3+2i
typeof(c)

d <- TRUE
typeof(d)

e <- 10L
typeof(e)


v <- c(TRUE,10L,5.5)
typeof(v)
print(v)


salary<-c(20000,25000,35000,40000)
print(salary)
new_salary <- salary + (salary * 0.10)
print(new_salary)
