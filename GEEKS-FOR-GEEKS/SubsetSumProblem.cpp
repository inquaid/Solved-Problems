//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int f(vector<int> &arr, vector<vector<int>> &dp, int n, int target) {
        if (n == 0)
            return target == 0;

        if (dp[n][target] != -1)
            return dp[n][target];
        if (arr[n - 1] <= target) {
            // take, skip
            return dp[n][target] = f(arr, dp, n - 1, target - arr[n - 1]) or
                                   f(arr, dp, n - 1, target);
        } else {
            // skip
            return dp[n][target] = f(arr, dp, n - 1, target);
        }
    }

    bool isSubsetSum(vector<int> &arr, int target) {
        // code here
        // memset(dp, -1, sizeof(dp));
        int n = arr.size();

        vector<int> prev(target + 1, 0), curr(target + 1);
        prev[0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                if (arr[i - 1] <= j) {
                    curr[j] = prev[j - arr[i - 1]] or prev[j];
                } else
                    curr[j] = prev[j];
            }
            prev = curr;
        }
        return prev[target];

        vector<vector<int>> dp(arr.size() + 1, vector<int>(target + 1, 0));

        dp[0][0] = 1;
        for (int i = 1; i <= n; i++) {

            for (int j = 0; j <= target; j++) {
                if (j == 0) {
                    dp[i][j] = 1;
                    continue;
                }
                if (arr[i - 1] <= j) {
                    // take, skip
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] or dp[i - 1][j];
                } else {
                    // skip
                    dp[i][j] = dp[i - 1][j];
                }
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
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends