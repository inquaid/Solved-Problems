// Your C++ code goes here
class Solution {
  public:
    int dp[50];
    int f(int present, int top) {
        if (dp[present] != -1) return dp[present];
        if (present == top) return 1;
        if (present > top) return 0;
        return dp[present] = f(present + 1, top) + f(present + 2, top);
    }

    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return f(0, n);
    }
};