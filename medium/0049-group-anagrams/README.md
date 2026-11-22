# Group Anagrams

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of strings `strs`, group the anagrams together. You can return the answer in **any order**.

 

Original
C++
**Example 1:**

**Input:** strs = ["eat","tea","tan","ate","nat","bat"]

**Output:** [["bat"],["nat","tan"],["ate","eat","tea"]]

**Explanation:**

- There is no string in strs that can be rearranged to form "bat".
- The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
- The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

**Example 2:**

**Input:** strs = [""]

**Output:** [[""]]

**Example 3:**

**Input:** strs = ["a"]

**Output:** [["a"]]

 

**Constraints:**

- 1 <= strs.length <= 104
- 0 <= strs[i].length <= 100
- strs[i] consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 22 ms (beats 34.17%)  
**Memory:** 26.2 MB (beats 40.55%)  
**Submitted:** 2026-11-22T18:11:41.706Z  

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>hash;

        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort( temp.begin(), temp.end());

            hash[temp].push_back(strs[i]);
        }

        vector<vector<string>>ans;

        for(auto it: hash){
            ans.push_back(it.second);
        }

        return ans ;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/group-anagrams/)