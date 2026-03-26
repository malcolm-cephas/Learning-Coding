'''Aim: Write a Python program to construct the stars(*) pattern, using a nested for loop.'''

n = 5
print("Constructing stars pattern:")

# Upper part
for i in range(1, n + 1):
    for j in range(i):
        print('*', end=' ')
    print()

# Lower part
for i in range(n - 1, 0, -1):
    for j in range(i):
        print('*', end=' ')
    print()
