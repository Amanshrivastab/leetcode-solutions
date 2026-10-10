
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1;
        int end = -1;

        int left = 0;
        int right = nums.size() - 1;

        // Find the first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                start = mid;
                right = mid - 1;  // Search further left
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        // Find the last occurrence
        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                end = mid;
                left = mid + 1;  // Search further right
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return {start, end};
    }
};
