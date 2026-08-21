# Tribonacci Sequence

## Problem Statement

The **Tribonacci sequence** is an extension of the Fibonacci sequence. Instead of each term being the sum of the previous **two** terms, each term is the sum of the previous **three** terms.

The sequence is defined as follows:

* **T(0) = 0**
* **T(1) = 1**
* **T(2) = 1**

For **n ≥ 3**:

```text
T(n) = T(n - 1) + T(n - 2) + T(n - 3)
```

### Task

Given an integer `n`, return the value of **T(n)**, the `n`th Tribonacci number.

---

## Solution

The implementation in **[Tribonacci](Tribonacci.py/)** uses an **iterative dynamic programming** approach with **constant space**.

Instead of storing all previously computed Tribonacci numbers, the program keeps track of only the last three values:

* `t0` → `T(n-3)`
* `t1` → `T(n-2)`
* `t2` → `T(n-1)`

Initially:

* `t0 = 0`
* `t1 = 1`
* `t2 = 1`

For each iteration from `3` to `n`, the variables are updated simultaneously:

```text
t0, t1, t2 = t1, t2, t0 + t1 + t2
```

After the loop completes, `t2` contains the value of the `n`th Tribonacci number.

This approach is more memory-efficient than storing the entire sequence because only the three most recent values are needed to compute the next one.

---

## Complexity Analysis

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

Since each Tribonacci number is computed exactly once and only three variables are maintained throughout the computation, this solution is both efficient and optimal in terms of space.
