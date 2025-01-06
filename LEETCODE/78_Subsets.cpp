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

class Solution {
  public:
    vector<int> temp;
    void genarateSet(vector<int> &nums, int i, int n, vector<vector<int>> &res) {
        if (i == n) {
            res.push_back(temp);
        } else {
            temp.push_back(nums[i]);
            genarateSet(nums, i + 1, n, res);
            temp.pop_back();
            genarateSet(nums, i + 1, n, res);
        }
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        int n = nums.size();
        vector<vector<int>> res;
        genarateSet(nums, 0, n, res);
        return res;
    }
};