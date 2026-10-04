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