'''Aim: Write a python program to perform multiplication of two square matrices.'''

import numpy as np

def multiply_matrices(A, B):
    return np.dot(A, B)

# For demo, creating two 2x2 matrices
A = np.array([[1, 2], [3, 4]])
B = np.array([[5, 6], [7, 8]])

print("Matrix A:")
print(A)
print("\nMatrix B:")
print(B)

result = multiply_matrices(A, B)
print("\nProduct (A x B):")
print(result)
