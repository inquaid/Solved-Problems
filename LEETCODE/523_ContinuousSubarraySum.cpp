// Your C++ code goes here
class Solution {
  public:
    bool checkSubarraySum(vector<int> &nums, int k) {
        int pre_sum = 0, cnt = 0, i = 0;
        unordered_map<int, int> mp;
        int zero = 0;
        mp[0] = -1;
        for (auto num : nums) {
            pre_sum += num;
            int temp = pre_sum % k;
            if (mp.find(temp) != mp.end()) {
                if (i - mp[temp] > 1)
                    return true;
            } else
                mp[temp] = i;
            i++;
        }
        return 0;
    }
};