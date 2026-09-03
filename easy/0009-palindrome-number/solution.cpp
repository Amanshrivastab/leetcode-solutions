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
