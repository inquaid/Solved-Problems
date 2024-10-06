#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &i : v) cin >> i;
        sort(v.begin(), v.end());
        int res = v[0];
        for (int i = 1; i < n; i++)
        {
            res += v[i];
            res = floor(res / 2.0);
        }
            cout << res << endl;
    }
    
}