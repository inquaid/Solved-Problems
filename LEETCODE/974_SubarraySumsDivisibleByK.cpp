// Your C++ code goes here
class Solution {
  public:
    int subarraysDivByK(vector<int> &nums, int k) {
        int pre_sum = 0, ans = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (auto num : nums) {
            pre_sum += num;
            int need = (pre_sum % k + k) % k;
            ans += mp[need];
            mp[need]++;
        }
        return ans;
    }
};