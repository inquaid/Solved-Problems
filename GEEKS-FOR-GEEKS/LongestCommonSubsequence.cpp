//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution {
  public:
    // Function to find the length of the longest common subsequence in two
    // strings.

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
    int lcs(string &s1, string &s2) {
        // your code here
        // vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1,
        // -1)); return f(s1, s2, s1.size(), s2.size(), dp);
        vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));
        int n = s1.size(), m = s2.size();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][m];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; // Take both the strings as input
        Solution ob;
        cout << ob.lcs(s1, s2) << endl; // Call the lcs function
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends