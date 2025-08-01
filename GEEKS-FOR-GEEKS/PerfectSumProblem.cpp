// Your C++ code goes here
class Solution {
  public:
    
    vector<vector<int>> dp;
    
    int f(vector<int> &arr, int target, int n) {
        if(target < 0) return 0;
        if(n == 0) {
            return target == 0;
        }
        if(dp[n][target] != -1) return dp[n][target];
        return dp[n][target] = f(arr, target - arr[n-1], n - 1) + f(arr, target, n - 1);
    }
    
    int f2(vector<int> &arr, int TARGET, int N) {
        vector<int> t(TARGET + 1, 0);
        t[0] = 1;
        for(int n = 1; n <= N; n++) {
            for(int target = TARGET; target >= 0; target--) {
                if(target >= arr[n-1]) {
                    t[target] = t[target - arr[n-1]] + t[target];
                } else t[target] = t[target];
            }
        }
        
        return t[TARGET];
    }
  
    int perfectSum(vector<int>& arr, int target) {
        // code here
        dp.assign(arr.size() + 1, vector<int> (target + 1, -1));
        return f2(arr, target, arr.size());
        
    }
};