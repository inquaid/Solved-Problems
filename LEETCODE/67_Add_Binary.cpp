#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int n = max(a.size(), b.size());
        if(a.size() < n) a = string(n - a.size(), '0') + a;
        if(b.size() < n) b = string(n - b.size(), '0') + b;

        string res = "";
        bool carry = false;

        for(int i = n-1; i >= 0; i--){
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            res += (sum % 2) + '0';
            carry = sum > 1;
        }
        if(carry) res += '1';
        reverse(res.begin(), res.end());
        return res;
        
    }
};