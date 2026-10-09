
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";

        for (int i = 1; i < n; i++) {
            string ans = "";
            int j = 0;

            while (j < s.length()) {
                char digit = s[j];
                int count = 0;

                // Count consecutive identical digits
                while (j < s.length() && s[j] == digit) {
                    count++;
                    j++;
                }

                // Append count first, then the digit
                ans += to_string(count);
                ans += digit;
            }

            s = ans;
        }

        return s;
    }
};