# Isomorphic Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, *determine if they are isomorphic*.

Two strings `s` and `t` are isomorphic if the characters in `s` can be replaced to get `t`.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

**Example 1:**

**Input:** s = "egg", t = "add"

**Output:** true

**Explanation:**

The strings `s` and `t` can be made identical by:

- Mapping 'e' to 'a'.
- Mapping 'g' to 'd'.

**Example 2:**

**Input:** s = "f11", t = "b23"

**Output:** false

**Explanation:**

The strings `s` and `t` can not be made identical as `'1'` needs to be mapped to both `'2'` and `'3'`.

**Example 3:**

**Input:** s = "paper", t = "title"

**Output:** true

 

**Constraints:**

- 1 <= s.length <= 5 * 104
- t.length == s.length
- s and t consist of any valid ascii character.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.2 MB (beats 80.67%)  
**Submitted:** 2026-10-28T17:51:32.665Z  

```cpp

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapST[256] = {0};
        int mapTS[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            unsigned char a = s[i];
            unsigned char b = t[i];

            if (mapST[a] != mapTS[b]) {
                return false;
            }

            mapST[a] = i + 1;
            mapTS[b] = i + 1;
        }

        return true;
    }
};


```

---

[View on LeetCode](https://leetcode.com/problems/isomorphic-strings/)