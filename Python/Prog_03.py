'''Aim: Write a program to calculate compound interest when principal, rate and number of periods are given.'''

P = float(input("Enter Principal amount: "))
R = float(input("Enter Rate of interest: "))
T = int(input("Enter Number of periods (years): "))


A = P * (pow((1 + R / 100), T))
CI = A - P

print(f"\nPrincipal: {P}")
print(f"Interest Rate: {R}%")
print(f"Years: {T}")
print(f"Compound Interest: {CI:.2f}")
print(f"Total Amount: {A:.2f}")
