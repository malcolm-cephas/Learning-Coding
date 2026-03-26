
data <- read.csv("cars_data.csv")
print("Explorative Data Analysis:")
print(summary(data))


model <- lm(dist ~ speed, data = data)
print("Linear Regression Summary:")
print(summary(model))


multi_model <- lm(mpg ~ hp + wt, data = mtcars)
print("Multi-Linear Regression Summary:")
print(summary(multi_model))
