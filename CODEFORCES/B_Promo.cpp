#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
    }
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--;
        if ((x - y) < 0) {
            cout << a[x] << endl;
        } else
            cout << a[x] - a[x - y] << endl;
    }
}