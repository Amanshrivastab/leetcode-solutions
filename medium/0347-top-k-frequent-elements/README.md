# Top K Frequent Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` and an integer `k`, return *the* `k` *most frequent elements*. You may return the answer in **any order**.

 

Original
C++
**Example 1:**

**Input:**
vector<int> nums = {1, 1, 1, 2, 2, 3};
int k = 2;

**Output:** [1,2]

**Example 2:**

**Input:**
vector<int> nums = {1};
int k = 1;

**Output:** [1]

**Example 3:**

**Input:**
vector<int> nums = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
int k = 2;

**Output:** [1,2]

 

**Constraints:**

- 1 <= nums.length <= 105
- -104 <= nums[i] <= 104
- k is in the range [1, the number of unique elements in the array].
- It is guaranteed that the answer is unique.

 

**Follow up:** Your algorithm's time complexity must be better than `O(n log n)`, where n is the array's size.

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 10.13%)  
**Memory:** 17.8 MB (beats 97.32%)  
**Submitted:** 2026-11-24T18:27:20.557Z  

```cpp

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> hash;
        vector<int> ans;

        // Step 1: Count frequency
        for(int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        // Step 2: Find maximum frequency k times
        for(int i = 0; i < k; i++) {

            auto maxIt = hash.begin();

            for(auto it = hash.begin(); it != hash.end(); it++) {

                if(it->second > maxIt->second) {
                    maxIt = it;
                }
            }

            ans.push_back(maxIt->first);
            hash.erase(maxIt);
        }

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/top-k-frequent-elements/)