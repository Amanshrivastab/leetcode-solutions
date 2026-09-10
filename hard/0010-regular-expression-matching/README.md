# Regular Expression Matching

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:


	'.' Matches any single character.​​​​
	'*' Matches zero or more of the preceding element.


Return a boolean indicating whether the matching covers the entire input string (not partial).

 
Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".


Example 2:

Input: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".


Example 3:

Input: s = "ab", p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)".


 
Constraints:


	1 <= s.length <= 20
	1 <= p.length <= 20
	s contains only lowercase English letters.
	p contains only lowercase English letters, '.', and '*'.
	It is guaranteed for each appearance of the character '*', there will be a previous valid character to match.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.2 MB (beats 56.53%)  
**Submitted:** 2026-09-10T17:31:53.039Z  

```cpp
class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        // dp[i][j] = does s[0..i) match p[0..j)?
        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
        dp[0][0] = true;

        // empty string vs pattern like "a*b*c*"
        for (int j = 1; j <= m; j++) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];  // treat "x*" as zero occurrences
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (p[j - 1] == s[i - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    // zero occurrence of preceding char
                    dp[i][j] = dp[i][j - 2];
                    // one or more occurrence, if preceding char matches s[i-1]
                    char prev = p[j - 2];
                    if (prev == s[i - 1] || prev == '.') {
                        dp[i][j] = dp[i][j] || dp[i - 1][j];
                    }
                }
                // else dp[i][j] stays false
            }
        }
        return dp[n][m];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/regular-expression-matching/)