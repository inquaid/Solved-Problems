#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;

int knapsack(vi &h, int n, vi &dp) {
    if(n == 0) return 0;    
    if(dp[n] != -1) return dp[n];
    int costOneStep = knapsack(h, n - 1, dp) + abs(h[n] - h[n - 1]);
    int costTwoStep = (n > 1) ? knapsack(h, n - 2, dp) + abs(h[n] - h[n - 2]) : INT_MAX;

    // return min( abs(h[n - 1] - knapsack(h, n - 1)), abs(h[n - 1] - knapsack(h, n - 2)) );
    return dp[n] = min(costOneStep, costTwoStep);
}

int main() {
    int n; cin >> n;
    vi h(n);
    vi dp(n + 1, -1);
    for(auto &i : h) cin >> i;      
    cout << knapsack(h, n - 1, dp);
}