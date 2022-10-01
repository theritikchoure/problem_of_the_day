
## Number of Distinct Islands

- Medium

Given a boolean 2D matrix grid of size n * m. You have to find the number of distinct islands where a group of connected 1s (horizontally or vertically) forms an island. Two islands are considered to be distinct if and only if one island is not equal to another (not rotated or reflected).

**Example 1:**

```
// INPUT
grid[][] = {{1, 1, 0, 0, 0},
            {1, 1, 0, 0, 0},
            {0, 0, 0, 1, 1},
            {0, 0, 0, 1, 1}}
// OUTPUT
1

// EXPLANATION:
grid[][] = {{1, 1, 0, 0, 0}, 
            {1, 1, 0, 0, 0}, 
            {0, 0, 0, 1, 1}, 
            {0, 0, 0, 1, 1}}

We have 2 equal islands, so we 
have only 1 distinct island.
```
**Example 2:**

```
// INPUT
grid[][] = {{1, 1, 0, 1, 1},
            {1, 0, 0, 0, 0},
            {0, 0, 0, 0, 1},
            {1, 1, 0, 1, 1}}
// OUTPUT
3

// EXPLANATION:
grid[][] = {{1, 1, 0, 1, 1}, 
            {1, 0, 0, 0, 0}, 
            {0, 0, 0, 0, 1}, 
            {1, 1, 0, 1, 1}}

We have 4 islands, but 2 of them
are equal, So we have 3 distinct islands.
```

**Your Task:**

You don't need to read or print anything. Your task is to complete the function **countDistinctIslands()** which takes the **grid** as an input parameter and returns the total number of **distinct** islands.

**Expected Time Complexity:** O(n * m)

**Expected Space Complexity:** O(n * m)

**Constraints:**
1 ≤ n, m ≤ 500
grid[i][j] == 0 or grid[i][j] == 1

---


**Question Link** : [Number of Distinct Islands](https://practice.geeksforgeeks.org/problems/number-of-distinct-islands/1)