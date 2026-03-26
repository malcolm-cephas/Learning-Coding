# Exp 5: Pie and Bar Charts
slices <- c(10, 12, 4, 16, 8)
lbls <- c("US", "UK", "Australia", "Germany", "France")

# Pie
pie(slices, labels = lbls, main="Pie Chart of Countries")

# 3D Pie (requires plotrix)
# library(plotrix)
# pie3D(slices, labels = lbls, explode=0.1, main="3D Pie Chart")

# Bar Chart
counts <- table(mtcars$gear)
barplot(counts, main="Car Distribution", xlab="Number of Gears", legend=rownames(counts))
