#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int cnt = 0, res = -1, mx = a[0];
    for (int i = 1; i < n; i++) {
        mx = max(mx, a[i]);
        if (a[i - 1] > a[i]) {
            cnt++;
            res = i;
        }
        if (cnt > 1) {
            cout << -1 << endl;
            return 0;
        }
    }
    if (cnt == 0)
        cout << 0;
    else {
        if (a[n - 1] > a[0])
            cout << -1;
        else
            cout << n - res;
    }
}