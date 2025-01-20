// Your C++ code goes here
class Solution {
  public:
    void f(vector<int> &candidates, int temp, int target, vector<int> &tempRes,
           vector<vector<int>> &res, int k) {
        if (temp == target) {
            res.push_back(tempRes);
            return;
        }
        for (int i = k; i < candidates.size(); i++) {
            if (temp + candidates[i] <= target) {
                tempRes.push_back(candidates[i]);
                f(candidates, temp + candidates[i], target, tempRes, res, i);
                tempRes.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<int> temp;
        vector<vector<int>> res;
        f(candidates, 0, target, temp, res, 0);
        return res;
    }
};