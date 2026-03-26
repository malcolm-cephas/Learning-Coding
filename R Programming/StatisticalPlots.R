

set.seed(123)
data <- data.frame(
  speed = rnorm(1000, 50, 10),
  dist = rnorm(1000, 100, 20)
)
write.csv(data, "cars_data.csv", row.names = FALSE)


boxplot(data$speed, main="Speed Box Plot")
hist(data$dist, main="Distance Histogram")
plot(data$speed, data$dist, main="Speed vs Distance Scatter")


list_data <- list("Red", "Green", c(21,32,11), TRUE, 51.23, 119.1)
df_data <- data.frame(
  emp_id = c(1:3),
  emp_name = c("Rick","Dan","Michelle")
)
print(list_data); print(df_data)
