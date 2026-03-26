'''Aim: Write a python program that defines a matrix and prints.'''

import numpy as np


matrix = np.array([
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
])

print("The defined matrix is:")
print(matrix)


print(f"\nElement at row 1, col 2: {matrix[0][1]}")
