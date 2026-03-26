'''Aim: 5. Multiple Linear Regression for House Price Prediction.'''
from sklearn.linear_model import LinearRegression
import pandas as pd


data = {
    'Size': [1000, 1500, 2000, 2500, 3000],
    'Beds': [2, 3, 3, 4, 4],
    'Age': [10, 5, 15, 2, 8],
    'Price': [200, 300, 350, 500, 550]
}
df = pd.DataFrame(data)

X = df[['Size', 'Beds', 'Age']]
y = df['Price']

model = LinearRegression()
model.fit(X, y)

print("Coefficients:", model.coef_)
print("Intercept:", model.intercept_)


test_case = [[1800, 3, 5]]
pred = model.predict(test_case)
print(f"Pred. Price for 1800sqft/3bed/5yr: ${pred[0]:.2f}k")
