# Ransom Note

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `ransomNote` and `magazine`, return `true`* if *`ransomNote`* can be constructed by using the letters from *`magazine`* and *`false`* otherwise*.

Each letter in `magazine` can only be used once in `ransomNote`.

 

Original
C++
**Example 1:**

```
Input: ransomNote = "a", magazine = "b"
Output: false

```

**Example 2:**

```
Input: ransomNote = "aa", magazine = "ab"
Output: false

```

**Example 3:**

```
Input: ransomNote = "aa", magazine = "aab"
Output: true

```

 

**Constraints:**

- 1 <= ransomNote.length, magazine.length <= 105
- ransomNote and magazine consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 33.46%)  
**Memory:** 12.8 MB (beats 7.86%)  
**Submitted:** 2026-11-12T18:09:01.991Z  

```cpp
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> mp;

        // Count frequency of each character in magazine
        for(int i = 0; i < magazine.length(); i++) {
            mp[magazine[i]]++;
        }

        // Check characters required by ransomNote
        for(int i = 0; i < ransomNote.length(); i++) {

            if(mp[ransomNote[i]] == 0) {
                return false;
            }

            mp[ransomNote[i]]--;
        }

        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/ransom-note/)