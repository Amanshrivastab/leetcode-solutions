# Valid Anagram

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

 

Original
C++
**Example 1:**

**Input:** s = "anagram", t = "nagaram"

**Output:** true

**Example 2:**

**Input:** s = "rat", t = "car"

**Output:** false

 

**Constraints:**

- 1 <= s.length, t.length <= 5 * 104
- s and t consist of lowercase English letters.

 

**Follow up:** What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 61.85%)  
**Memory:** 9.6 MB (beats 90.19%)  
**Submitted:** 2026-11-11T18:20:07.044Z  

```cpp

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) {
            return false;
        }

        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/valid-anagram/)