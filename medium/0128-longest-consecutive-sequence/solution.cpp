
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

