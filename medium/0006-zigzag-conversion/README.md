# Zigzag Conversion

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

```
P   A   H   N
A P L S I I G
Y   I   R

```

And then read line by line: `"PAHNAPLSIIGYIR"`

Write the code that will take a string and make this conversion given a number of rows:

```
string convert(string s, int numRows);

```

 

**Example 1:**

```
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

```

**Example 2:**

```
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I

```

**Example 3:**

```
Input: s = "A", numRows = 1
Output: "A"

```

 

**Constraints:**

- 1 <= s.length <= 1000
- s consists of English letters (lower-case and upper-case), ',' and '.'.
- 1 <= numRows <= 1000

## Solution

**Language:** C++  
**Runtime:** 10 ms (beats 23.31%)  
**Memory:** 14.1 MB (beats 52.32%)  
**Submitted:** 2026-11-03T18:14:29.713Z  

```cpp
class Solution {
public:
    string convert(string s, int numRows) {

        // Handle edge cases
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        // Create empty strings for each row
        vector<string> rows(numRows);

        int current_row = 0;
        bool going_down = false;

        // Traverse each character
        for (char ch : s) {

            rows[current_row] += ch;

            // Change direction at top or bottom
            if (current_row == 0 || current_row == numRows - 1) {
                going_down = !going_down;
            }

            // Move up or down
            current_row += going_down ? 1 : -1;
        }

        // Combine all rows
        string result = "";

        for (string row : rows) {
            result += row;
        }

        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/zigzag-conversion/)