//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int f(vector<int> &coins, int n, int sum, vector<vector<int>> &dp) {
        if (sum == 0)
            return 0;
        if (sum < 0 or n == 0)
            return INT_MAX;

        if (dp[n][sum] != -1)
            return dp[n][sum];
        int take = INT_MAX;
        if (coins[n - 1] > 0) {
            take = f(coins, n, sum - coins[n - 1], dp);
            if (take != INT_MAX)
                take++;
        }
        int skip = f(coins, n - 1, sum, dp);

        return dp[n][sum] = min(take, skip);
    }

    int minCoins(vector<int> &coins, int sum) {
        // Your code goes here
        int n = coins.size();
        // vector<vector<int>> dp(n + 1, vector<int> (sum + 1, -1));
        // int temp = f(coins, coins.size(), sum, dp);
        // if(temp == INT_MAX) temp = -1;
        // return temp;
        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, INT_MAX));
        for (int i = 0; i <= n; i++)
            dp[i][0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                int take = INT_MAX;
                if (coins[i - 1] > 0 and j >= coins[i - 1]) {
                    take = dp[i][j - coins[i - 1]];
                    if (take != INT_MAX)
                        take++;
                }
                int skip = dp[i - 1][j];
                dp[i][j] = min(take, skip);
            }
        }
        if (dp[n][sum] == INT_MAX)
            return -1;
        return dp[n][sum];
        // return dp[n][sum] == INT_MAX ? -1 : dp[n][sum];
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends