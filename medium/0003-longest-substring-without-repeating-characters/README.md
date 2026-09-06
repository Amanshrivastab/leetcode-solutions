# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string s, find the length of the longest substring without duplicate characters.

 
Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.


Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.


Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.


 
Constraints:


	0 <= s.length <= 105
	s consists of English letters, digits, symbols and spaces.

## Solution

**Language:** C++  
**Runtime:** 349 ms (beats 5.84%)  
**Memory:** 131.4 MB (beats 5.11%)  
**Submitted:** 2026-09-06T18:13:50.879Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st ;
        int left =0;
        int result = 0;

        for (int right = 0; right<s.length(); right++){
            while(st.find(s[right]) != st.end() ){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            result = max(result,right - left + 1);
        }
        return result ;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)