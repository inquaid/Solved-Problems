class Solution {
  public:
    vector<vector<int>> dp;
    int f(string &s1, string &s2, int n, int m) {
        if(n == 0 or m == 0) {
            return 0;
        }
        if(dp[n][m] != -1) {
            return dp[n][m];
        }
        if(s1[n - 1] == s2[m - 1]) {
            return dp[n][m] = 1 + f(s1, s2, n - 1, m - 1);
        } else {
            return dp[n][m] = max(f(s1, s2, n - 1, m), f(s1, s2, n, m - 1));
        }
    }
    
    int f2(string &s1, string &s2) {
        
        for(int n = 1; n <= s1.size(); n++) {
            for(int m = 1; m <= s2.size(); m++) {
                if(s1[n - 1] == s2[m - 1]) {
                    dp[n][m] = 1 + dp[n - 1][m - 1];
                } else {
                    dp[n][m] = max(dp[n - 1][m], dp[n][m - 1]);
                }
            }
        }
        return dp[s1.size()][s2.size()];
    }
    
    int lcs(string &s1, string &s2) {
        // code here
        dp.assign(s1.size() + 1, vector<int> (s2.size() + 1, 0));
        return f2(s1, s2);
    }
};
