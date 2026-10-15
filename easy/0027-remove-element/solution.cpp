class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (nums[i] == val) {
                count++;
            } else {
                nums[i - count] = nums[i];
            }
        }

        return size - count;
    }
};