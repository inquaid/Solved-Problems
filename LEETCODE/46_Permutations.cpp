// Your C++ code goes here
class Solution {
  public:
    void f(vector<vector<int>> &res, vector<int> &nums, vector<int> &temp, vector<int> &visited, int n, int indx) {
        if (indx == n) {
            res.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (visited[i] == 0) {
                temp[indx] = nums[i];
                visited[i] = 1;

                f(res, nums, temp, visited, n, indx + 1);

                visited[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> res;
        vector<int> temp(nums.size(), -1), visited(nums.size(), 0);

        f(res, nums, temp, visited, nums.size(), 0);
        return res;
    }
};