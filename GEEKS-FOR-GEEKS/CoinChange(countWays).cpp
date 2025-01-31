//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int f(vector<int> &coins, int n, int sum, vector<vector<int>> &dp) {
        if (sum == 0)
            return 1;
        if (sum < 0 or n == 0)
            return 0;

        if (dp[n][sum] != -1)
            return dp[n][sum];
        return dp[n][sum] = f(coins, n - 1, sum, dp) +
                            f(coins, n, sum - coins[n - 1], dp);
    }

    int count(vector<int> &coins, int sum) {
        // code here.
        // vector<vector<int>> dp(coins.size() + 1, vector<int>(sum + 1, -1));
        // return f(coins, coins.size(), sum, dp);
        vector<vector<int>> dp(coins.size() + 1, vector<int>(sum + 1, 0));
        int n = coins.size();
        for (int i = 0; i < 1; i++) {
            dp[i][0] = 1;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
                dp[i][j] += dp[i - 1][j];
                if ((j - coins[i - 1]) >= 0)
                    dp[i][j] += dp[i][j - coins[i - 1]];
            }
        }

        return dp[n][sum];
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();
        Solution ob;
        cout << ob.count(arr, sum) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends