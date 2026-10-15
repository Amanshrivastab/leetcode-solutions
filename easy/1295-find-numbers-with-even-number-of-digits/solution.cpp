#include <vector>

class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
        int count = 0;
        for (int num : nums) {
            int digits = 0;
            // Count the number of digits
            while (num > 0) {
                digits++;
                num /= 10;
            }
            // Check if the digit count is even
            if (digits % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};
