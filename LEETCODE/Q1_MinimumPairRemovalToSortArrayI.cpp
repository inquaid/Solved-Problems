class Solution {
  public:
    static bool comp(pair<int, int> a, pair<int, int> b) {
        if (a.first != b.first)
            return a.first < b.first;
        return a.second < b.second;
    }
    int indx(vector<int> &v) {
        vector<pair<int, int>> a;
        for (int i = 1; i < v.size(); i++) {
            a.push_back({v[i - 1] + v[i], i});
        }
        sort(a.begin(), a.end(), comp);
        return a[0].second;
    }
    int minimumPairRemoval(vector<int> &nums) {
        int cnt = 0;
        while (!is_sorted(nums.begin(), nums.end())) {
            int i = indx(nums);
            nums[i - 1] += nums[i];
            nums.erase(nums.begin() + i);
            cnt++;
        }
        return cnt;
    }
};