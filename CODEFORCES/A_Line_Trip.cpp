#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n + 2);
        v[0] = 0;
        v[n + 1] = x;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        int res = 0;
        for (int i = 1; i <= n + 1; i++) {
            if (i == n + 1) {

                res = max(res, 2 * (v[i] - v[i - 1] ));
                // cout << 2 * (v[i] - v[i - 1]) << " ";
            } else {
                // cout << v[i] - v[i - 1] << " ";
                res = max(res, v[i] - v[i - 1]);
            }
        }

        cout << res << endl;
    }
}