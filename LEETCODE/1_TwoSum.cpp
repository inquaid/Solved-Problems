// Your C++ code goes here
class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {

        unordered_map<int, int> mp;
        vector<int> res;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int need = target - nums[i];
            if (mp.find(need) != mp.end()) {
                res.push_back(i);
                res.push_back(mp[need]);
                return res;
            }

            mp[nums[i]] = i;
        }
        return res;
    }
};