// Your C++ code goes here
class Solution {
  public:
    int subarraySum(vector<int> &nums, int k) {
        int prevSum = 0, ans = 0;
        map<int, int> mp;
        mp[0]++;
        for (auto &num : nums) {
            prevSum += num;
            int need = prevSum - k;
            ans += mp[need];
            mp[prevSum]++;
        }
        return ans;
    }
};