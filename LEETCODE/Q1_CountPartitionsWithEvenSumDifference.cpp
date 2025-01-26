// Your C++ code goes here
class Solution {
  public:
    vector<int> makePreSum(vector<int> &a) {
        int n = a.size();
        vector<int> preSum(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            preSum[i] = preSum[i - 1] + a[i - 1];
        }
        return preSum;
    } // range(l - 1, r) 1 base indexing
    int countPartitions(vector<int> &nums) {
        int n = nums.size();
        vector<int> preSum = makePreSum(nums);
        int cnt = 0;
        // print(preSum);
        for (int i = 1; i < n; ++i) {
            // print(preSum[i], preSum[n] - preSum[i]);
            if (abs(preSum[i] - preSum[n] - preSum[i]) % 2 == 0)
                cnt++;
        }
        return cnt;
    }
};
©leetcode