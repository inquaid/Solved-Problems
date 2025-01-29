//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int f(vector<int> &price, int n, vector<int> &dp) {
        if (n == 0)
            return 0;
        if (dp[n] != -1)
            return dp[n];
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans = max(ans, f(price, n - i, dp) + price[i - 1]);
        }
        return dp[n] = ans;
    }

    int cutRod(vector<int> &price) {
        // code here
        // vector<int> dp(price.size() + 1, -1);
        // return f(price, price.size(), dp);
        vector<int> dp(price.size() + 1, 0);
        for (int n = 1; n <= price.size(); n++) {
            int ans = 0;
            for (int i = 0; i <= n; i++) {
                ans = max(ans, dp[n - i] + price[i - 1]);
            }
            dp[n] = ans;
        }
        return dp[price.size()];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;

        cout << ob.cutRod(a) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends