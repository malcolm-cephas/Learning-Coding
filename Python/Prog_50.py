'''Aim: Write a program that checks if a triangle is a right triangle given its side lengths.'''

s1 = float(input("Enter side 1: "))
s2 = float(input("Enter side 2: "))
s3 = float(input("Enter side 3: "))

# Find hypotenuse (longest side)
sides = sorted([s1, s2, s3])
a, b, c = sides[0], sides[1], sides[2]

if round(c**2, 4) == round(a**2 + b**2, 4):
    print("It's a Right Triangle.")
else:
    print("It's not a Right Triangle.")
