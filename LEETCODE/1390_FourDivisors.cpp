#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumFourDivisors(vector<int> &nums) {
        int n = nums.size(), res = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0, sum = 0;
            for (int divisor = 1; divisor * divisor <= nums[i]; divisor++) {
                if (nums[i] % divisor == 0) {
                    if (nums[i] / divisor != divisor) {
                        cnt += 2;
                        sum += divisor + (nums[i] / divisor);
                    } else {
                        cnt += 1;
                        sum += divisor;
                    }
                }
            }
            if (cnt == 4)
                res += sum;
        }
        return res;
    }
};