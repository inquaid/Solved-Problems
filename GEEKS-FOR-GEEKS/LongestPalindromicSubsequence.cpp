//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int f(string &s, int l, int r, vector<vector<int>> &dp) {
        if (l == r)
            return 1;
        if (s[l - 1] == s[r - 1] and l + 1 == r)
            return 2;

        if (dp[l][r] != -1)
            return dp[l][r];

        if (s[l - 1] == s[r - 1])
            return dp[l][r] = 2 + f(s, l + 1, r - 1, dp);
        else
            return dp[l][r] = max(f(s, l + 1, r, dp), f(s, l, r - 1, dp));
    }
    int longestPalinSubseq(string &s) {
        // code here
        // vector<vector<int>> dp(s.size() + 1, vector<int>(s.size() + 1, -1));
        // return f(s, 0, s.size(), dp);

        vector<vector<int>> dp(s.size() + 2, vector<int>(s.size() + 2, 0));
        int n = s.size();
        int res = 0;
        for (int i = 0; i <= n; i++)
            dp[i][i] = 1;

        for (int l = n; l >= 1; l--) {
            for (int r = l + 1; r <= n; r++) {
                // if(l > r) break;
                if (s[l - 1] == s[r - 1]) {
                    dp[l][r] = 2 + dp[l + 1][r - 1];
                    // res = max(res, dp[l][r]);
                } else {
                    dp[l][r] = max(dp[l + 1][r], dp[l][r - 1]);
                }
            }
        }
        return dp[1][n];
    }
};

//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends