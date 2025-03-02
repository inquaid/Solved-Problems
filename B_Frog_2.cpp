#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;

int knapsack(vi &h, int n, int k, vi &dp) {
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];
    int res = INT_MAX;
    for (int i = 1; i <= k; ++i) {
        if(n - i >= 0) {
            res = min(res, knapsack(h, n - i, k, dp) + abs(h[n] - h[n - i]));
        }
    }
    return dp[n] = res; 
}

int main() {
    int n, k; cin >> n >> k; 
    vi h(n);
    vi dp(n + 1, -1);
    for(auto &i : h) cin >> i;      
    cout << knapsack(h, n - 1, k, dp);
}