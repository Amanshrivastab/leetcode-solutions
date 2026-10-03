# Length of Last Word

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` consisting of words and spaces, return *the length of the **last** word in the string.*

A **word** is a maximal substring consisting of non-space characters only.

 

**Example 1:**

```
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

```

**Example 2:**

```
Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

```

**Example 3:**

```
Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.

```

 

**Constraints:**

- 1 <= s.length <= 104
- s consists of only English letters and spaces ' '.
- There will be at least one word in s.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.9 MB (beats 33.08%)  
**Submitted:** 2026-10-03T18:29:32.498Z  

```cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        
        // Skip spaces at the end
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int count = 0;

        // Count the last word
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/length-of-last-word/)