# Happy Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write an algorithm to determine if a number `n` is happy.

A **happy number** is a number defined by the following process:

- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
- Those numbers for which this process ends in 1 are happy.

Return `true` *if* `n` *is a happy number, and* `false` *if not*.

 

Original
C++
**Example 1:**

```
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

```

**Example 2:**

```
Input: n = 2
Output: false

```

 

**Constraints:**

- 1 <= n <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 33.76%)  
**Memory:** 8.2 MB (beats 45.33%)  
**Submitted:** 2026-11-15T18:16:58.225Z  

```cpp
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!= 1 && seen.find(n) == seen.end()){
            seen.insert(n);
            int sum =0;
            while(n > 0){
                int digit = n % 10;
                sum += digit*digit;
                n = n/10;
            }
            n = sum ;
        }
        return n==1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/happy-number/)