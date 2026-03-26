'''Aim: 
24. draw_rectangle() function
25. rectangle with color attribute
26. draw_point() function
27. Circle class and draw_circle()
'''

from tkinter import *

class Point:
    def __init__(self, x=0, y=0):
        self.x, self.y = x, y

class Rectangle:
    def __init__(self, p, w=100, h=50, color="blue"):
        self.p = p # Point (top-left)
        self.w, self.h = w, h
        self.color = color

class Circle:
    def __init__(self, p, r=50, color="red"):
        self.p = p # Center Point
        self.r = r
        self.color = color

def draw_rectangle(canvas, rect):
    canvas.create_rectangle(rect.p.x, rect.p.y, rect.p.x + rect.w, rect.p.y + rect.h, fill=rect.color)

def draw_point(canvas, point):
    canvas.create_oval(point.x - 2, point.y - 2, point.x + 2, point.y + 2, fill="black")

def draw_circle(canvas, circle):
    canvas.create_oval(circle.p.x - circle.r, circle.p.y - circle.r, circle.p.x + circle.r, circle.p.y + circle.r, fill=circle.color)

# Setup Tkinter
root = Tk()
root.title("Drawing Canvas")
canvas = Canvas(root, width=400, height=400, bg="white")
canvas.pack()

# Instances
r = Rectangle(Point(50, 50), 150, 80, "cyan")
p = Point(200, 200)
c = Circle(Point(300, 300), 40, "yellow")

# Drawing
draw_rectangle(canvas, r)
draw_point(canvas, p)
draw_circle(canvas, c)

root.mainloop()
