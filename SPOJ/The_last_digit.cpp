#include<bits/stdc++.h>
using namespace std;
#define int long long
int bin_exp(int a, int b){
    int res = 1;
    while (b)
    {
        if(b&1) res = res * a % 10;
        a = a * a % 10;
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