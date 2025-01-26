// Your C++ code goes here
class Solution {
  public:
    int f(vector<int> &coins, int amount, vector<int> &dp) {
        if (amount == 0) {
            return 0;
        }
        if (amount < 0)
            return INT_MAX;
        if (dp[amount] != -1)
            return dp[amount];
        int temp = INT_MAX;
        for (auto coin : coins) {
            int res = f(coins, amount - coin, dp);
            if (res != INT_MAX) {
                temp = min(temp, res + 1);
            }
        }
        return dp[amount] = temp;
    }

    int coinChange(vector<int> &coins, int amount) {
        // res = INT_MAX
        // memset(dp, INT_MAX, sizeof(dp));
        vector<int> dp(amount + 10, -1);
        int res = f(coins, amount, dp);
        if (res == INT_MAX)
            return -1;
        return res;
    }
};