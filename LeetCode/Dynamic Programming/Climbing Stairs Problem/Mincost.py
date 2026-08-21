# Problem:
# You are given an array 'cost' where cost[i] is the cost of stepping on
# the ith stair. Once you pay the cost of a step, you can climb either
# one or two steps.
#
# You can start from either step 0 or step 1.
# The goal is to reach the floor above the last step (the top), and
# stepping onto the top floor does not incur any cost.
#
# Return the minimum cost required to reach the top.


def climb_min(cost):
    n = len(cost)

    # If there are only two steps, start from the cheaper one.
    if n == 2:
        return min(cost[0], cost[1])

    # DP array where min_cost[i] stores the minimum cost
    # required to reach step i.
    min_cost = [0] * n

    # Base cases:
    # We can start from step 0 or step 1.
    min_cost[0] = cost[0]
    min_cost[1] = cost[1]

    # Compute the minimum cost to reach each step.
    # To reach step i, we must come from either step i-1 or i-2.
    for i in range(2, n):
        min_cost[i] = min(min_cost[i - 1], min_cost[i - 2]) + cost[i]

    # The landing (top floor) does not have a cost.
    # We can reach it from either of the last two steps.
    return min(min_cost[n - 1], min_cost[n - 2])


if __name__ == "__main__":
    cost = list(map(int, input("Enter the step costs separated by spaces: ").split()))
    print("Minimum cost:", climb_min(cost))


# Time Complexity: O(n)
# Space Complexity: O(n)

# Note:
# This solution is not space-optimal. At any given time, we only use
# min_cost[i-1] and min_cost[i-2] to compute the next value.
# Therefore, storing the entire min_cost array is unnecessary.
# The algorithm can be optimized to O(1) space by replacing the array
# with two variables that keep track of the previous two minimum costs.