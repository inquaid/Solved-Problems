#include<bits/stdc++.h>
using namespace std;
#define int long long
int bin_exp(int a, int b){
    int res = 1;
    while (b)
    {
        if(b&1) res = res * a;
        a = a * a;
        b = b >> 1;
    }
    return res;    
}

signed main(){
    int n, m;
    cin >> n >> m;
    // cout << bin_exp(2, n % (m-1), m);
    if(n >= 27) cout << m;
    else{
        int twoPowN = bin_exp(2, n);
        cout << (m % twoPowN);
    }
}