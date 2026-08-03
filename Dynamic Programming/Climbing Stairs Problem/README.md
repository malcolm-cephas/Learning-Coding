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

### Recommendation

In general, **if the order of computation is clear, a bottom-up (tabulation) approach is preferred** because it avoids recursion and the overhead of recursive function calls. **If the order of computation is not clear or the problem is naturally recursive, a top-down (memoization) approach is often the better choice**, as it computes only the required subproblems while caching intermediate results.
