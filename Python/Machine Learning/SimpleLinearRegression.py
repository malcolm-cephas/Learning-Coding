'''Aim: 4. Python program to implement Simple Linear Regression.'''
from sklearn.linear_model import LinearRegression
import numpy as np

# Feature (size in sqft) and Target (price in $1000s)
X = np.array([[500], [700], [1000], [1200], [1500]])
y = np.array([100, 150, 200, 250, 300])

model = LinearRegression()
model.fit(X, y)

test_size = np.array([[1100]])
pred = model.predict(test_size)

print(f"Price prediction for {test_size[0][0]} sqft: ${pred[0]:.2f}k")
