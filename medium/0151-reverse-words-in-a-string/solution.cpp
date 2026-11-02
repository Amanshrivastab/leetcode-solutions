
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.size();
        int i = 0;

        while (i < n) {

            // Skip extra spaces
            while (i < n && s[i] == ' ') {
                i++;
            }

            // Extract word
            string word = "";

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            if (!word.empty()) {
                words.push_back(word);
            }
        }

        // Reverse words
        reverse(words.begin(), words.end());

        // Build result
        string ans = "";

        for (int j = 0; j < words.size(); j++) {
            ans += words[j];

            if (j != words.size() - 1) {
                ans += " ";
            }
        }

        return ans;
    }
};
