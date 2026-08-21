# Jump Game Problems

This folder contains solutions for two variations of the **Jump Game** problem.

The problem is based on an integer array `nums`, where each element represents the **maximum jump length** possible from that index.

Example:

```
nums = [2,3,1,1,4]
```

At index `0`, the value is `2`, meaning you can jump:

* 1 step → index 1
* 2 steps → index 2

The goal changes depending on the problem.

---

## 1. Minimum Number of Jumps

### Files:

* [Java](No_of_Jumps.java/)
* [Python](No_of_Jumps.py/)

### Problem:

Given an array `nums`, return the minimum number of jumps required to reach the last index.

It is guaranteed that the last index can be reached.

### Example:

Input:

```
nums = [2,3,1,1,4]
```

Output:

```
2
```

Explanation:

```
0 → 1 → 4
```

The minimum number of jumps is 2.

### Approach:

The solution uses a **Greedy Algorithm**.

Variables used:

* `jumps` → stores the number of jumps taken.
* `currentEnd` → represents the boundary of the current jump range.
* `farthest` → stores the farthest index reachable from the current range.

### Complexity:

* Time Complexity: `O(n)`
* Space Complexity: `O(1)`

---

## 2. Check if Last Index is Reachable

### Files:
* [Java](Last_index_reach.java/)
* [Python](Last_index_reach.py/)

### Problem:

Given an array `nums`, return:

* `true` if you can reach the last index.
* `false` if the last index cannot be reached.

### Example 1:

Input:

```
nums = [2,3,1,1,4]
```

Output:

```
true
```

Explanation:

```
0 → 1 → 4
```

The last index can be reached.

---

### Example 2:

Input:

```
nums = [3,2,1,0,4]
```

Output:

```
false
```

Explanation:

The jump reaches index 3, but:

```
nums[3] = 0
```

so no further progress can be made.

### Approach:

The solution uses a **Greedy Algorithm**.

The variable:

* `farthest` → stores the maximum index reachable so far.

While iterating through the array:

* Update the farthest reachable position.
* If the current index is beyond `farthest`, that index cannot be reached, so return `false`.
* If `farthest` reaches the last index, return `true`.

### Complexity:

* Time Complexity: `O(n)`
* Space Complexity: `O(1)`

---

## Concepts Practiced

* Greedy Algorithms
* Array Traversal
* Range Expansion
* Optimization from Brute Force to Linear Time Solutions
