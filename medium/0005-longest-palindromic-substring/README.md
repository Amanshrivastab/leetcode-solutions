# Longest Palindromic Substring

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, return *the longest* *palindromic* *substring* in `s`.

 

**Example 1:**

```
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

```

**Example 2:**

```
Input: s = "cbbd"
Output: "bb"

```

 

**Constraints:**

- 1 <= s.length <= 1000
- s consist of only digits and English letters.

## Solution

**Language:** C++  
**Runtime:** 10 ms (beats 55.43%)  
**Memory:** 9.2 MB (beats 87.70%)  
**Submitted:** 2026-11-04T18:26:19.154Z  

```cpp
class Solution {
public:
    string longestPalindrome(string s) {

        int start = 0;
        int maxLen = 1;

        for(int i = 0; i < s.size(); i++) {

            // Odd length palindrome
            int left = i;
            int right = i;

            while(left >= 0 && right < s.size() &&
                  s[left] == s[right]) {

                if(right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }

                left--;
                right++;
            }

            // Even length palindrome
            left = i;
            right = i + 1;

            while(left >= 0 && right < s.size() &&
                  s[left] == s[right]) {

                if(right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-palindromic-substring/)