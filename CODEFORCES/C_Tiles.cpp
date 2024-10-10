#include<bits/stdc++.h>
using namespace std;
#define int long long

const int m = 998244353;

int bin_exp(int a, int b){
    int res = 1;
    while (b)
    {
        if(b&1) res = res * a % m;
        a = a * a % m;
        b = b >> 1;    
    }
    return res;
}

signed main(){
    int w, h;
    cin >> w >> h;
    cout << bin_exp(2, w + h);
}