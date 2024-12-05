#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve();
signed main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
void solve() {
    int n, odd = 0, even = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v[i] = temp;
        if (temp & 1)
            odd++;
        else
            even++;
    }

    for (int bit = 0; bit <= 62; bit++) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if ((v[i] >> bit) & 1)
                cnt++;
        }

        if (cnt != n and cnt != 0) {
            cout << (1LL << (bit + 1LL)) << endl;
            return;
        }
    }
}
