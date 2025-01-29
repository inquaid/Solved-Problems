//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dp[102][5010];
    bool f(vector<int> &a, int n, int sum1, int target) {
        if (sum1 == target)
            return 1;
        if (n == 0)
            return 0;

        if (dp[n][sum1] != -1)
            return dp[n][sum1];
        return dp[n][sum1] = f(a, n - 1, sum1 + a[n - 1], target) or
                             f(a, n - 1, sum1, target);
    }

    bool equalPartition(vector<int> &arr) {
        // code here
        int sum = 0;
        for (auto i : arr)
            sum += i;
        if (sum % 2 != 0)
            return 0;
        int target = sum / 2, n = arr.size();

        // vector<vector<int>> dp(arr.size(), vector<int>(sum + 100, -1));
        memset(dp, -1, sizeof(dp));
        return f(arr, arr.size(), 0, target);

        int dp[n + 1][target + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < n; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= target; j++) {
                if (arr[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] or dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][target];
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

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends