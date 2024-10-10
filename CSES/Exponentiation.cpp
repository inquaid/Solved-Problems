#include<bits/stdc++.h>

using namespace std;
#define int long long

const int m = 1e9 + 7;

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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << bin_exp(a, b) << endl;
    }
    
}