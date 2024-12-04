#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        sort(v.begin(), v.end(), greater<int>());
        int total = 0, res = 0;
        // for(auto i : v)
        //     cout << i << " ";
        for (int i = 0; i < n; i++) {
            if (total + v[i] <= k) {
                total += v[i];
            } else {
                res = min(k - total, v[i]);
                break;
            }
        }
        if ((total + res) < k) {
            res = k - total;
        }
        cout << res << endl;
    }
}