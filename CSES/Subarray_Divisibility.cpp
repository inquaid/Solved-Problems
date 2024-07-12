#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    map<int, int> mp;
    int prev = 0, cnt = 0;
    
    mp[0] = 1;

    for (int i = 0; i < n; i++) {
        prev += a[i];
        int need = (prev % n + n) % n; 
        cnt += mp[need];
        mp[need]++;
    }

    cout << cnt;
}
