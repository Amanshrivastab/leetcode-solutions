# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer x, return true if x is a palindrome, and false otherwise.

 
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.


Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.


Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


 
Constraints:


	-231 <= x <= 231 - 1


 
Follow up: Could you solve it without converting the integer to a string?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.5 MB (beats 64.76%)  
**Submitted:** 2026-09-03T13:49:07.446Z  

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        // Step 1: Handle edge cases
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        
        // Step 2: Reverse the second half of the number
        while (x > reversedHalf) {
            reversedHalf = (reversedHalf * 10) + (x % 10);
            x /= 10;
        }

        // Step 3: Compare both halves
        return x == reversedHalf || x == reversedHalf / 10;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/palindrome-number/)