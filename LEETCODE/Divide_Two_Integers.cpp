#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        bool check = (dividend < 0) ^ (divisor < 0);
 
       long long newDividend = abs(static_cast<long long> (dividend));
       long long newDivisor = abs(static_cast<long long> (divisor));

        long long cnt = 0;
        for (int i = 31; i >= 0; i--) {
            if ((newDividend >> i) >= newDivisor) {
                newDividend -= (newDivisor << i);
                cnt += (1LL << i);
            }
        }
        if(check == false and cnt > INT_MAX ){
            return INT_MAX;
        }
        if(check and -cnt < INT_MIN ){
            return INT_MIN;
        }
        return check ? -cnt : cnt;
    }
};
