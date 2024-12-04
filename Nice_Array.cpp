#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, total = 0, tol = 0;
        cin >> n >> k;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            total += floor(temp / (k * 1.0));
            if (temp % k != 0) {
                tol++;
            }
        }
        if (abs(total) <= tol)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}