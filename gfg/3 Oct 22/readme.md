
## Modified Numbers and Queries

- Easy

Find the sum of all the numbers between the range l and r. Here each number is represented by the sum of its prime factors. 

**Note :** For example, 6 is represented by 5 because 6 has two prime factors 2 and 3 and 2 + 3 = 5.

**Example 1:**

```
// INPUT
l = 1, r = 2

// OUTPUT
3

// EXPLANATION:
1->1, 2->2 and 1+2=3.  
```
**Example 2:**

```
// INPUT
l = 1, r = 6

// OUTPUT
18

// EXPLANATION:
1->1, 2->2, 3->3, 4->2
5->5, 6->2+3=5, 1+2+3+2+5+5 = 18. 
```

**Your Task:**

You dont need to read input or print anything. Complete the function **sumOfAll()** which takes l and r as input parameter and returns sum all the numbers ( as represented ) in the given range both L and R included

**Expected Time Complexity:** O(nloglogn)

**Expected Space Complexity:** O(n)

**Constraints:**
1 <= l <= r <=10^4

---


**Question Link** : [Modified Numbers and Queries](https://practice.geeksforgeeks.org/problems/modified-numbers-and-queries0904/1)