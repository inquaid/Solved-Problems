#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n, odd = 0, even = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if ((i & 1)) {
                even += v[i];
            } else
                odd += v[i];
        }

        if (n % 2 == 0) {
            if (odd == even and (even + odd) % n == 0) {
                cout << "YES\n";
            } else
                cout << "NO\n";
        } else {
            int two = (n - 1) / 2;
            int three = two + 1;
            // cout << two << " " << three << "\n";
            int temp = (odd / three) * two;
            // cout << temp << " ";
            // cout << odd << " " << even << endl;
            if (temp == even and (even + odd) % n == 0) {
                cout << "YES\n";

            } else
                cout << "NO\n";
        }
    }
}