# Merge k Sorted Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

You are given an array of `k` linked-lists `lists`, each linked-list is sorted in ascending order.

*Merge all the linked-lists into one sorted linked-list and return it.*

 

**Example 1:**

```
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted linked list:
1->1->2->3->4->4->5->6

```

**Example 2:**

```
Input: lists = []
Output: []

```

**Example 3:**

```
Input: lists = [[]]
Output: []

```

 

**Constraints:**

- k == lists.length
- 0 <= k <= 104
- 0 <= lists[i].length <= 500
- -104 <= lists[i][j] <= 104
- lists[i] is sorted in ascending order.
- The sum of lists[i].length will not exceed 104.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 44.07%)  
**Memory:** 19.1 MB (beats 14.67%)  
**Submitted:** 2026-10-04T16:51:21.691Z  

```cpp
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int> values;

        // Traverse every linked list
        for (int i = 0; i < lists.size(); i++) {
            
            ListNode* curr = lists[i];

            while (curr != nullptr) {
                values.push_back(curr->val);
                curr = curr->next;
            }
        }

        // Sort all values
        sort(values.begin(), values.end());

        // Create the merged linked list
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        for (int value : values) {
            tail->next = new ListNode(value);
            tail = tail->next;
        }

        return dummy->next;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/merge-k-sorted-lists/)