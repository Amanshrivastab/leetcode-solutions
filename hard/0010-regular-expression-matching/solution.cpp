class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        // dp[i][j] = does s[0..i) match p[0..j)?
        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
        dp[0][0] = true;

        // empty string vs pattern like "a*b*c*"
        for (int j = 1; j <= m; j++) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];  // treat "x*" as zero occurrences
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (p[j - 1] == s[i - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[j - 1] == '*') {
                    // zero occurrence of preceding char
                    dp[i][j] = dp[i][j - 2];
                    // one or more occurrence, if preceding char matches s[i-1]
                    char prev = p[j - 2];
                    if (prev == s[i - 1] || prev == '.') {
                        dp[i][j] = dp[i][j] || dp[i - 1][j];
                    }
                }
                // else dp[i][j] stays false
            }
        }
        return dp[n][m];
    }
};