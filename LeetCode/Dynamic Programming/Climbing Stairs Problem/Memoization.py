# Dictionary to store previously computed results
memo = {}

def climbstairs(n):
    # Check if the result is already computed
    if n in memo:
        return memo[n]

    # Base cases
    if n == 1:
        return 1
    if n == 2:
        return 2

    # Compute and store the result
    result = climbstairs(n - 1) + climbstairs(n - 2)
    memo[n] = result

    return result


# Example usage
n = int(input("Enter the number of stairs: "))
print("Number of ways:", climbstairs(n))