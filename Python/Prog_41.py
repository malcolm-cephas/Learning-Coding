'''Aim: Write a program to demonstrate working with tuples in python.'''

T = ("apple", "banana", "cherry", "mango", "grape", "orange")
print("Initial tuple:", T)

# Accessing
print("Second fruit:", T[1])
print("Range indexing (3-6):", T[3:6])

# Iterating
print("Fruits in tuple:")
for x in T:
    print("- " + x)

# Check existence
if "apple" in T:
    print("Yes, 'apple' is in the tuple.")

print("Length of tuple:", len(T))
