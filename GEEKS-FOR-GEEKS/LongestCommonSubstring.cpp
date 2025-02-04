//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int f(string &s1, string &s2, int n, int m) {
        if (n == 0 or m == 0)
            return 0;

        if (s1[n - 1] == s2[m - 1]) {
            return f(s1, s2, n - 1, m - 1) + 1;
        } else {
            return 0;
        }
    }
    int longestCommonSubstr(string &s1, string &s2) {
        // your code here
        // return f(s1, s2, s1.size(), s2.size());
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));
        int n = s1.size(), m = s2.size();
        int res = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    res = max(res, dp[i][j]);
                } else {
                    dp[i][j] = 0;
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends