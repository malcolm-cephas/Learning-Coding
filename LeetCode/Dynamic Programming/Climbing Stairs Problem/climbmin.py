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

    # prev2 stores the minimum cost to reach step i-2.
    # prev1 stores the minimum cost to reach step i-1.
    prev2 = cost[0]
    prev1 = cost[1]

    # Compute the minimum cost for each step while
    # keeping only the previous two values.
    for i in range(2, n):
        current = min(prev1, prev2) + cost[i]
        prev2 = prev1
        prev1 = current

    # The landing (top floor) does not have a cost.
    # We can reach it from either of the last two steps.
    return min(prev1, prev2)


if __name__ == "__main__":
    cost = list(map(int, input("Enter the step costs separated by spaces: ").split()))
    print("Minimum cost:", climb_min(cost))


# Time Complexity: O(n)
# Space Complexity: O(1)

# Note:
# This is the space-optimized version of the dynamic programming solution.
# Instead of storing the minimum cost for every step, it only keeps track
# of the previous two values because those are the only ones needed to
# compute the current minimum cost.