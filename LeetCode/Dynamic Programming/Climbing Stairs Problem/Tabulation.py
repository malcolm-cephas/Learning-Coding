def climbstairs(n):
    if n == 1:
        return 1
    if n == 2:
        return 2

    # Create a list of size n + 1
    ways = [0] * (n + 1)

    # Base cases
    ways[1] = 1
    ways[2] = 2

    # Fill the table
    for i in range(3, n + 1):
        ways[i] = ways[i - 1] + ways[i - 2]

    return ways[n]


# Example usage
n = int(input("Enter the number of stairs: "))
print("Number of ways:", climbstairs(n))