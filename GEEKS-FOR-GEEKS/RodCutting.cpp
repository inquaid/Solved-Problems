// User function Template for C++

class Solution {
  public:
    vector<int> dp;
    vector<vector<int>> dp2;
    int f(vector<int> &price, int sz) {
        // if(sz == 0) return 0;
        if(dp[sz] != -1) return dp[sz];
        int temp = 0;
        for(int i = 0; i < price.size(); i++){
            int val = price[i];
            if(i + 1 <= sz) {
                temp = max(temp, val + f(price, sz - i - 1));
            }
        }
        return dp[sz] = temp;
    }
    
    int f2(vector<int> &price, int n) {
        for(int sz = 0; sz <= n; sz++) {
            for(int i = 0; i < price.size(); i++) {
                int val = price[i];
                if(i + 1 <= sz) {
                    dp[sz] = max(dp[sz], val + dp[sz - i - 1]);
                }
            }
        }
        return dp[n];
    }
    
    int f3(int i, int sz, vector<int> &price) {
        if(i == 0 or sz == 0) return 0;
        if(dp2[i][sz] != -1) return dp2[i][sz];
        int pick = 0, no_pick = f3(i - 1, sz, price);
        if(i <= sz) {
            pick = price[i - 1] + f3(i, sz - i, price);
        }

        return dp2[i][sz] = max(pick, no_pick);
    }
    
    int f4(int n, vector<int> &price) {
        for(int i = 1; i <= n; i++) {
            for(int sz = 1; sz <= n; sz++) {
                int pick = 0, no_pick = dp[sz];
                if(i <= sz) {
                    pick = price[i - 1] + dp[sz - i];
                }
                dp[sz] = max(pick, no_pick);
            }
        }
        return dp[n];
    }
    
    int cutRod(vector<int> &price) {
        // code here
        dp.assign(price.size() + 1, 0);
        dp2.assign(price.size() + 1, vector<int> (price.size() + 1, 0));
        return f4(price.size(), price);
    }
};