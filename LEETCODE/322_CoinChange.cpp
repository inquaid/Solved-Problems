class Solution {
public:
    vector<vector<int>> dp;
    vector<int> dp2;
    int f(int i, int amount, vector<int> &coins) {
        if(i == 0) {
            // return amount == 0;
            if(amount == 0) return 0;
            else return 1e9;
        }
        if(dp[i][amount] != -1) return dp[i][amount];
        int pick = 1e9, no_pick = f(i - 1, amount, coins);
        if(coins[i - 1] <= amount) {
            pick = 1 + f(i, amount - coins[i - 1], coins);
        }
        return dp[i][amount] = min(pick, no_pick);
    }

    int f2(int n, int AMOUNT, vector<int> &coins) {
        for(int i = 1; i <= AMOUNT; i++) {
            dp2[i] = 1e9;
        }
        for(int i = 1; i <= n; i++) {
            for(int amount = 0; amount <= AMOUNT; amount++) {
                int pick = 1e9, no_pick = dp2[amount];
                if(coins[i - 1] <= amount) {
                    pick = 1 + dp2[amount - coins[i-1]];
                }
                dp2[amount] = min(pick, no_pick);
            }
        }
        return dp2[AMOUNT];
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        // dp.assign(n + 1, vector<int> (amount + 1, 0));
        dp2.assign(amount + 1, 0);
        int temp = f2(n, amount, coins);
        if(temp == 1e9) return -1;
        return temp;
    }
};