# Reverse Words in a String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an input string `s`, reverse the order of the **words**.

A **word** is defined as a sequence of non-space characters. The **words** in `s` will be separated by at least one space.

Return *a string of the words in reverse order concatenated by a single space.*

**Note** that `s` may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

**Example 1:**

```
Input: s = "the sky is blue"
Output: "blue is sky the"

```

**Example 2:**

```
Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

```

**Example 3:**

```
Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.

```

 

**Constraints:**

- 1 <= s.length <= 104
- s contains English letters (upper-case and lower-case), digits, and spaces ' '.
- There is at least one word in s.

 

**Follow-up: **If the string data type is mutable in your language, can you solve it **in-place** with `O(1)` extra space?

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 41.91%)  
**Memory:** 11.1 MB (beats 34.20%)  
**Submitted:** 2026-11-02T17:43:47.536Z  

```cpp

class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.size();
        int i = 0;

        while (i < n) {

            // Skip extra spaces
            while (i < n && s[i] == ' ') {
                i++;
            }

            // Extract word
            string word = "";

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            if (!word.empty()) {
                words.push_back(word);
            }
        }

        // Reverse words
        reverse(words.begin(), words.end());

        // Build result
        string ans = "";

        for (int j = 0; j < words.size(); j++) {
            ans += words[j];

            if (j != words.size() - 1) {
                ans += " ";
            }
        }

        return ans;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/reverse-words-in-a-string/)