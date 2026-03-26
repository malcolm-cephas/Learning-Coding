'''Aim: Demonstrate module creation using geometrical shapes.'''


import math

class Shape:
    def area(self): pass

class Circle(Shape):
    def __init__(self, r): self.r = r
    def area(self): return math.pi * (self.r ** 2)

class Rectangle(Shape):
    def __init__(self, w, h): self.w, self.h = w, h
    def area(self): return self.w * self.h

print("Geometry Module Example:")
c = Circle(5)
r = Rectangle(4, 6)

print(f"Circle Area (r=5): {c.area():.2f}")
print(f"Rectangle Area (4x6): {r.area()}")
