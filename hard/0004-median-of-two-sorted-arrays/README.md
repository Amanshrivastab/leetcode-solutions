# Median of Two Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 
Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.


Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


 
Constraints:


	nums1.length == m
	nums2.length == n
	0 <= m <= 1000
	0 <= n <= 1000
	1 <= m + n <= 2000
	-106 <= nums1[i], nums2[i] <= 106

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 27.81%)  
**Memory:** 96 MB (beats 18.41%)  
**Submitted:** 2026-09-08T17:40:54.290Z  

```cpp
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> merged;

        int i = 0, j = 0;

        // Merge both arrays
        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } 
            else {
                merged.push_back(nums2[j]);
                j++;
            }
        }

        // Add remaining elements of nums1
        while (i < nums1.size()) {
            merged.push_back(nums1[i]);
            i++;
        }

        // Add remaining elements of nums2
        while (j < nums2.size()) {
            merged.push_back(nums2[j]);
            j++;
        }

        int n = merged.size();

        // Odd number of elements
        if (n % 2 == 1) {
            return merged[n / 2];
        }

        // Even number of elements
        return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/)