#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int x;
    cin >> x;
    pair<int, int> res{-1, -1}, temp;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0){
            int a = i;
            int b = x / i;
            if(gcd(a, b) != 1) continue;
            temp = {a, b};
            if(res.first == -1){
                res = temp;
            }
            else{
                int mx_res = max(res.first, res.second); 
                int mx_temp = max(temp.first, temp.second); 
                if(mx_temp < mx_res){
                    res = temp;
                }
            }
        }
    }

    if(res.first == -1){
        cout << 1 << " " << x;
    }
    else{
        cout << res.first << " " << res.second;
    }
}