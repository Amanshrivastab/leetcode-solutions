# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a **palindrome** if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true`* if it is a **palindrome**, or *`false`* otherwise*.

 

**Example 1:**

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

**Example 2:**

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

**Example 3:**

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

**Constraints:**

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 13.03%)  
**Memory:** 10.6 MB (beats 7.46%)  
**Submitted:** 2026-10-23T21:44:56.618Z  

```cpp

#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string sample;

        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                sample.push_back(tolower(s[i]));
            }
        }

        string test;

        for (int i = sample.size() - 1; i >= 0; i--) {
            test.push_back(sample[i]);
        }

        return sample == test;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)