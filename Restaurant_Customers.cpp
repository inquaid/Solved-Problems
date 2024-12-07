#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n;
    cin >> n;
    // vector<int> v(1e10, 0);
    map<int, int> mp;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]--;
        // mx = max(mx, b);
        // v[a]++;
        // v[b]--;
    }
    int curr = 0, res = 0;
    for (auto i : mp) {
        curr += i.second;
        res = max(res, curr);
    }
    cout << res;
}