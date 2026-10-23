
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string sample;

        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                sample.push_back(tolower(s[i]));
            }
        }

        string test;

        for (int i = sample.size() - 1; i >= 0; i--) {
            test.push_back(sample[i]);
        }

        return sample == test;
    }
};
