'''Aim: Write a program to convert a list and tuple into arrays.'''
import numpy as np

my_list = [1, 2, 3, 4, 5]
my_tuple = (10, 20, 30, 40, 50)


arr1 = np.array(my_list)
arr2 = np.array(my_tuple)

print("List:", my_list)
print("Array from list:", arr1)
print("Type of arr1:", type(arr1))

print("\nTuple:", my_tuple)
print("Array from tuple:", arr2)
print("Type of arr2:", type(arr2))
