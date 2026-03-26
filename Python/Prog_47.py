'''Aim: Write a Python script that prints prime numbers less than 20.'''

print("Prime numbers between 1 and 20:")
for num in range(2, 20):
    for i in range(2, int(num**0.5) + 1):
        if (num % i) == 0:
            break
    else:
        print(num, end=" ")
print()
