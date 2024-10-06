#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int res = 0, cnt = 0;

        for (int i = n - 2; i >= 0; i--){
            if (v[i]){
                res += v[i] + cnt;
                cnt = 0;
            }
            else
                cnt++;
        }

        cout << res << endl;
    }
}