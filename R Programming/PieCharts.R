
slices <- c(10, 12, 4, 16, 8)
lbls <- c("US", "UK", "Australia", "Germany", "France")


pie(slices, labels = lbls, main="Pie Chart of Countries")






counts <- table(mtcars$gear)
barplot(counts, main="Car Distribution", xlab="Number of Gears", legend=rownames(counts))
