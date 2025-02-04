// Your C++ code goes here
class Solution {
  public:
    int f(string &s1, string &s2, int n, int m, vector<vector<int>> &dp) {
        if (n == 0 or m == 0)
            return 0;

        if (dp[n][m] != -1)
            return dp[n][m];
        if (s1[n - 1] == s2[m - 1]) {
            return dp[n][m] = f(s1, s2, n - 1, m - 1, dp) + 1;
        } else {
            return dp[n][m] =
                       max(f(s1, s2, n - 1, m, dp), f(s1, s2, n, m - 1, dp));
        }
    }

    int longestCommonSubsequence(string text1, string text2) {
        // vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() +
        // 1, -1)); return f(text1, text2, text1.size(), text2.size(), dp);
        vector<vector<int>> dp(text1.size() + 1,
                               vector<int>(text2.size() + 1, 0));
        int n = text1.size(), m = text2.size();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][m];
    }
};