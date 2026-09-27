# Generate Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given `n` pairs of parentheses, write a function to *generate all combinations of well-formed parentheses*.

 

**Example 1:**

```
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

```

**Example 2:**

```
Input: n = 1
Output: ["()"]

```

 

**Constraints:**

- 1 <= n <= 8

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 67.29%)  
**Memory:** 15.8 MB (beats 36.27%)  
**Submitted:** 2026-09-27T18:18:06.784Z  

```cpp
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(ans, "", 0, 0, n);
        return ans;
    }

    void backtrack(vector<string>& ans, string current,
                   int open, int close, int n) {

        // A complete valid combination
        if (current.length() == 2 * n) {
            ans.push_back(current);
            return;
        }

        // Add '(' if we still have opening brackets available
        if (open < n) {
            backtrack(ans, current + "(", open + 1, close, n);
        }

        // Add ')' only when it won't make the string invalid
        if (close < open) {
            backtrack(ans, current + ")", open, close + 1, n);
        }
                   }
};
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)