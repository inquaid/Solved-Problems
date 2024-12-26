class Solution {
  public:
    vector<vector<int>> subsets(vector<int> &nums) {
        int n = nums.size();
        vector<vector<int>> res(1 << n);
        int row = 0;
        for (int bits = 0; bits < (1 << n); bits++) {
            for (int i = 0; i < n; i++) {
                if ((bits >> i) & 1) {
                    res[row].push_back(nums[i]);
                }
            }
            row++;
        }
        return res;
    }
};