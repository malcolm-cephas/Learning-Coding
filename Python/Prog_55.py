'''Aim: Write a Python class to implement pow(x, n).'''

class Calculator:
    def power(self, x, n):
        return x ** n

calc = Calculator()
x = float(input("Enter base (x): "))
n = float(input("Enter exponent (n): "))
print(f"{x} powered to {n} is: {calc.power(x, n)}")
