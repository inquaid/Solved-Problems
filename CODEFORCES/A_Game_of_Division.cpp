#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++) {
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if (i != j)
                if ((abs(v[i] - v[j]) % k) == 0) {
                    ok = false;
                    break;
                }
        }
        if (ok) {
            cout << "YES\n";
            cout << i + 1 << endl;
            return;
        }
    }

    cout << "NO\n";
}