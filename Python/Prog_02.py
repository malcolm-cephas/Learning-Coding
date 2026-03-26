'''Aim: Start a Python interpreter and use it as a Calculator.'''

# Simple calculator program to demonstrate usage
def add(a, b): return a + b
def sub(a, b): return a - b
def mul(a, b): return a * b
def div(a, b): return a / b

print("Python Calculator Demo:")
x, y = 10, 5
print(f"10 + 5 = {add(x, y)}")
print(f"10 - 5 = {sub(x, y)}")
print(f"10 * 5 = {mul(x, y)}")
print(f"10 / 5 = {div(x, y)}")
print(f"10^2 = {pow(10, 2)}")
