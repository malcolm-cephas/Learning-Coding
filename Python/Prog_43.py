'''Aim: Convert Celsius to Fahrenheit and Vice versa.'''
cel = float(input("Enter Temperature in Celsius: "))
fahr = (cel * 9/5) + 32
print(f"{cel}C = {fahr}F")

f = float(input("Enter Temperature in Fahrenheit: "))
c = (f - 32) * 5/9
print(f"{f}F = {c}C")
