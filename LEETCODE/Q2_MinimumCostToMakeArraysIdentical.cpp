// Your C++ code goes here
class Solution {
  public:
    long long minCost(vector<int> &arr, vector<int> &brr, long long k) {
        int n = arr.size();
        long long res = 0;
        for (int i = 0; i < n; i++) {
            res += abs(arr[i] - brr[i]);
        }
        long long res2 = k;
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        for (int i = 0; i < n; i++) {
            res2 += abs(arr[i] - brr[i]);
        }
        if (res > res2)
            swap(res, res2);
        // cout << res << " " <<res2;
        if (res < 0) {
            return max(res, res2);
        }
        return min(res, res2);
    }
};
