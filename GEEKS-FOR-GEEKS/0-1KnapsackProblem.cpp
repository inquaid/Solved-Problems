class Solution {
  public:
    vector<vector<int>> dp;
    int memo(int w, vector<int> &val, vector<int> &wt, int n) {
        if(w == 0 or n == 0) return 0;
        if(dp[n][w] != -1) return dp[n][w];
        if(wt[n - 1] <= w) {
            return dp[n][w] = max(val[n-1] + memo(w - wt[n-1], val, wt, n - 1),
                memo(w, val, wt, n - 1));
        } else
            return dp[n][w] = memo(w, val, wt, n - 1);
        
    }
    
    int tabu(int W, vector<int> &val, vector<int> &wt, int N) {
        for(int n = 1; n <= N; n++) {
            for(int w = 1; w <= W; w++) {
                if(wt[n - 1] <= w) {
                    dp[n][w] = max(val[n-1] + dp[n-1][w - wt[n-1]], dp[n-1][w]);
                } else
                    dp[n][w] = dp[n - 1][w];
            }
        }
        return dp[N][W];
    }
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        dp.assign(val.size() + 1, vector<int> (W + 1,-1));
        // dp.assign(val.size() + 1, vector<int> (W + 1,0));
        return memo(W, val, wt, val.size());   
    }
};
