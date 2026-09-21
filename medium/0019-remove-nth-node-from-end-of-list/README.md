# Remove Nth Node From End of List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `head` of a linked list, remove the `nth` node from the end of the list and return its head.

 

**Example 1:**

```
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

```

**Example 2:**

```
Input: head = [1], n = 1
Output: []

```

**Example 3:**

```
Input: head = [1,2], n = 1
Output: [1]

```

 

**Constraints:**

- The number of nodes in the list is sz.
- 1 <= sz <= 30
- 0 <= Node.val <= 100
- 1 <= n <= sz

 

**Follow up:** Could you do this in one pass?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15 MB (beats 25.77%)  
**Submitted:** 2026-09-21T17:55:04.549Z  

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int len = 0;
       ListNode* temp = head ;
       while (temp != nullptr){
        len++;
        temp = temp->next;
       }
       if(n==len){
        return head->next;
       }
       temp = head ;
       for (int i = 0; i<len - n -1; i++){
        temp = temp->next;
       }
       temp->next = temp->next->next;

       return head ;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)