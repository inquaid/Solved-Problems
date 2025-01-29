// Your C++ code goes here
class Solution {
  public:
    int f(vector<int> &nums, int target, int n, int sum,
          vector<vector<int>> &dp) {
        if (n == 0)
            return sum == target;

        if (dp[n][sum + 1000] != -1)
            return dp[n][sum + 1000];
        return f(nums, target, n - 1, sum + nums[n - 1], dp) +
               f(nums, target, n - 1, sum - nums[n - 1], dp);
    }

    int findTargetSumWays(vector<int> &nums, int target) {
        vector<vector<int>> dp(nums.size() + 1, vector<int>(40010, -1));
        return f(nums, target, nums.size(), 0, dp);
    }
};