// Your C++ code goes here
class Solution {
  public:
    int dp[5100][500];
    int f(int amount, vector<int> &coins, int indx) {
        if (amount == 0)
            return 1;
        if (amount < 0 or indx >= coins.size())
            return 0;

        if (dp[amount][indx] != -1)
            return dp[amount][indx];

        int take = f(amount - coins[indx], coins, indx);
        int skip = f(amount, coins, indx + 1);
        return dp[amount][indx] = take + skip;
    }

    int change(int amount, vector<int> &coins) {
        memset(dp, -1, sizeof(dp));
        return f(amount, coins, 0);
    }
};