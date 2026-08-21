def climbstairs(n):
    if n == 1:
        return 1
    if n == 2:
        return 2
    return climbstairs(n - 1) + climbstairs(n - 2)

# Example usage
n = int(input("Enter the number of stairs: "))
print("Number of ways:", climbstairs(n))