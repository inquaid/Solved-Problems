// Your C++ code goes here
class Solution {
  public:
    void f(vector<int> &candidates, int k, int temp, int target,
           vector<int> &tempRes, vector<vector<int>> &res) {
        if (temp == target) {
            res.push_back(tempRes);
            return;
        }

        for (int i = k; i < candidates.size(); i++) {
            if (i > k and candidates[i] == candidates[i - 1])
                continue;

            if (temp + candidates[i] <= target) {
                tempRes.push_back(candidates[i]);
                f(candidates, i + 1, temp + candidates[i], target, tempRes,
                  res);
                tempRes.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        f(candidates, 0, 0, target, temp, res);
        return res;
    }
};