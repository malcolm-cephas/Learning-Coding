# Exp 8 & 9: EDA and Regression
data <- read.csv("cars_data.csv")
print("Explorative Data Analysis:")
print(summary(data))

# Linear Regression
model <- lm(dist ~ speed, data = data)
print("Linear Regression Summary:")
print(summary(model))

# Multi Regression (using built-in mtcars)
multi_model <- lm(mpg ~ hp + wt, data = mtcars)
print("Multi-Linear Regression Summary:")
print(summary(multi_model))
