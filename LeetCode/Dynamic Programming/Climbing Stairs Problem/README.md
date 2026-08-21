# Climbing Stairs Problem

## Question

There is a staircase with **n** steps. You are standing at the bottom and want to reach the top. At each move, you can either:

* Climb **1 step**, or
* Climb **2 steps**.

Determine the total number of distinct ways to reach the top of the staircase.

---

## Solutions

### **[Basic](Basic.py/)**

This implementation uses a simple recursive approach. It starts with two base cases:

* **1 step** → 1 way
* **2 steps** → 2 ways

For every other value of `n`, the solution is obtained by adding the number of ways to reach the previous two steps.

Although this approach is easy to understand, it is highly inefficient because the same subproblems are solved repeatedly. Since the function does not store previously computed results, the number of recursive calls grows exponentially.

* **Time Complexity:** `O(2^n)`
* **Space Complexity:** `O(n)` (recursion stack)

---

### **[Memoization](Memoization.py/)**

This solution uses **memoization** (top-down dynamic programming).

The algorithm still uses recursion, but before solving a subproblem, it checks whether the answer has already been computed. If it has, the stored value is returned immediately. Otherwise, the value is calculated, stored, and reused in future recursive calls.

By avoiding repeated calculations, the algorithm becomes much more efficient than the basic recursive approach.

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)` (memo table + recursion stack)

---

### **[Tabulation](Tabulation.py/)**

This implementation uses **tabulation** (bottom-up dynamic programming).

Instead of recursion, it starts with the base cases and iteratively computes the number of ways for every step from `1` to `n`. Since each state is calculated exactly once, the algorithm efficiently builds the final answer.

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)` (DP table)

---

## Variant: Minimum Cost Climbing Stairs

Instead of counting the number of ways to reach the top, this variation assigns a cost to each step.

You are given an array `cost` where `cost[i]` represents the cost of stepping on the `i`th stair. You may start from either step **0** or step **1**, and each move allows you to climb either **one** or **two** steps. The goal is to reach the floor above the last step, where the landing itself has **no cost**.

Determine the **minimum total cost** required to reach the top.

---

### **[mincost.py](mincost.py/)**

This implementation uses **tabulation** to compute the minimum cost required to reach each step.

A dynamic programming array stores the minimum cost to reach every stair. The minimum cost for the current step is computed using the cheaper of the previous two steps.

Although this solution is efficient in terms of time, it stores the minimum cost for every step even though only the previous two values are needed.

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)`

---

### **[climbmin.py](climbmin.py/)**

This implementation is the **space-optimized** version of the previous solution, using constant transition logic.

Instead of maintaining an entire dynamic programming array, it keeps only the minimum costs for the previous two steps. Since each new value depends only on these two values, the extra memory used is constant.

This is the optimal dynamic programming solution for the Minimum Cost Climbing Stairs problem.

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

---

## Memoization vs. Tabulation

Both memoization and tabulation are dynamic programming techniques that eliminate redundant computations and reduce the time complexity from **O(2^n)** to **O(n)**. The key difference lies in how they compute the solution.

| Feature                     | Memoization                                                                         | Tabulation                                                                          |
| --------------------------- | ----------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------- |
| Approach                    | Top-down                                                                            | Bottom-up                                                                           |
| Uses Recursion              | Yes                                                                                 | No                                                                                  |
| Stores Intermediate Results | Yes                                                                                 | Yes                                                                                 |
| Time Complexity             | `O(n)`                                                                              | `O(n)`                                                                              |
| Space Complexity            | `O(n)`                                                                              | `O(n)`                                                                              |
| Risk of Stack Overflow      | Yes (for large `n`)                                                                 | No                                                                                  |
| Best For                    | Problems that are naturally recursive or when not all subproblems need to be solved | Problems where all subproblems must be solved and iterative solutions are preferred |

### Summary

* **Memoization** starts with the original problem and recursively breaks it down into smaller subproblems, storing results as they are computed.
* **Tabulation** starts with the smallest subproblems and builds the solution iteratively until it reaches the final answer.
* For the **Climbing Stairs** problem, **tabulation is generally preferred** because every intermediate state is required, it avoids recursion, and it eliminates the possibility of stack overflow for large values of `n`.
* The **Minimum Cost Climbing Stairs** problem demonstrates an additional optimization: if each state depends on only a fixed number of previous states, the dynamic programming table can often be reduced to a few variables, improving the space complexity from **O(n)** to **O(1)**.

### Recommendation

In general, **if the order of computation is clear, a bottom-up (tabulation) approach is preferred** because it avoids recursion and the overhead of recursive function calls. **If the order of computation is not clear or the problem is naturally recursive, a top-down (memoization) approach is often the better choice**, as it computes only the required subproblems while caching intermediate results.
