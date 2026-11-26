# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array of integers `nums`, return *the length of the longest consecutive elements sequence.*

You must write an algorithm that runs in `O(n)` time.

 

Original
C++
**Example 1:**

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

```

**Example 2:**

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

```

**Example 3:**

```
Input: nums = [1,0,1,2]
Output: 3

```

 

**Constraints:**

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 98 ms (beats 22.93%)  
**Memory:** 88.8 MB (beats 62.28%)  
**Submitted:** 2026-11-26T18:17:55.630Z  

```cpp

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        // Step 1: Store all numbers in set
        for (int num : nums) {
            st.insert(num);
        }

        int longest = 0;

        // Step 2: Check every number
        for (int num : st) {

            // Start only if previous number doesn't exist
            if (st.find(num - 1) == st.end()) {

                int currentNum = num;
                int count = 1;

                // Step 3: Count consecutive numbers
                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};


```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)