#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
        // cout << i << " ";
        sum += i;
    }

    int res = 1e10;

    for (int i = 0; i < (1 << n); i++) {
        int temp = 0;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                // cout << v[j] << " ";
                temp += v[j];
            }
        }
        res = min(res, abs((sum - temp) - temp));
        // cout << endl;
    }
    cout << res;
}