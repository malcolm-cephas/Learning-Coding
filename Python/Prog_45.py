'''Aim: Pythagorean Theorem check for right triangles.'''
base=float(input("Enter length of Base : "))
perp=float(input("Enter length of Perpendicular : "))
hypo=float(input("Enter length of Hypotenuse : "))

if hypo**2==((base**2)+(perp**2)):
    print("It's a right triangle")
else:
    print("It's not a right triangle")
