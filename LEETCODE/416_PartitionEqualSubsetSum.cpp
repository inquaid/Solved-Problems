class Solution {
public: 
    int ttl;
    vector<vector<int>> dp;
    bool f(vector<int> &nums, int n, int sum) {
        if(n == 0) {
            return sum * 2 == ttl;
        }
        if(dp[n][sum] != -1) return dp[n][sum];
        return dp[n][sum] = (f(nums, n - 1, sum + nums[n - 1]) or f(nums, n - 1, sum));
    }

    bool f2(vector<int> &nums, int N, int SUM) {
        if(SUM&1) return 0;
        // for(auto i : nums) dp[1][i] = 1;
        // dp[0][0] = 1;
        int target = SUM / 2;
        vector<int> t(target + 1, 0);
        t[0] = 1;
        for(int n = 1; n <= N; n++) {
            for(int sum = target; sum >= 0; sum--) {
                if(sum >= nums[n-1])
                    t[sum] = (t[sum - nums[n-1]] or t[sum]);
                t[sum] |= t[sum];
            }
        } return t[target];
    }

    bool canPartition(vector<int>& nums) {
        ttl = 0;
        for(auto i : nums) ttl += i;
        // dp.assign(nums.size() + 1, vector<int> (ttl + 1, 0));
        // dp.assign(nums.size() + 1, vector<int> (ttl + 1, -1));
        return f2(nums, nums.size(), ttl);

    }
};