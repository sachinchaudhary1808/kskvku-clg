expectancy <- read.csv("date_rate.csv")

names(expectancy)[1] <- "year"
names(expectancy)[2] <- "race"
names(expectancy)[3] <- "sex"
names(expectancy)[4]<- "life_expectancy"
names(expectancy)[5]<- "death_rate"
View(expectancy)
