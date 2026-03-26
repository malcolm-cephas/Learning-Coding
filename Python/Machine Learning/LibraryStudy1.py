'''Aim: 2. Study of Statistics, Math, Numpy and Scipy.'''
import math
import numpy as np
from scipy import linalg

# Math module
print(f"Factorial of 5: {math.factorial(5)}")

# Numpy module
arr = np.array([1, 2, 3, 4, 5])
print(f"Numpy Array squared: {arr ** 2}")

# Scipy module (Linear Algebra)
mat = np.array([[1, 2], [3, 4]])
det = linalg.det(mat)
print(f"Determinant of matrix: {det}")
