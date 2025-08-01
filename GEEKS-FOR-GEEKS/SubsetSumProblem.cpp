class Solution {
  public:
  
    vector<vector<int>> dp;
    int f(vector<int> &arr, int sum, int n) {
        if(n == 0 or sum <= 0) {
            return sum == 0;
        }
        if(dp[n][sum] != -1) return dp[n][sum];
        return dp[n][sum] = (f(arr, sum - arr[n-1], n-1) or f(arr, sum, n - 1));
    }  
    
    int f2(vector<int> &arr, int SUM) {
        vector<int> t(SUM + 1, 0);
        t[0] = 1;
        for(int n = 0; n <= arr.size(); n++) {
            for(int sum = SUM; sum >= 0; sum--) {
                t[sum] = t[sum];
                if(sum >= arr[n-1]) {
                    t[sum] |= t[sum-arr[n-1]];
                }
            }
        } 
        return t[SUM];
    }
        
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        // dp.assign(arr.size() + 1, vector<int> (sum + 1, -1));
        return f2(arr, sum);
        
    }
};