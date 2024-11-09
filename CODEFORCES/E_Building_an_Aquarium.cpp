#include <bits/stdc++.h>
using namespace std;
#define int long long

int check(vector<int> &a, int height, int x) {
    int n = a.size(), res = 0;
    for (int i = 0; i < n; i++) {
        res += max(0ll, height - a[i]);
        if (res > x)
            return 0;
    }

    return 1;
}

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        int l = 0, r = 1e10, res = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (check(a, mid, x)) {
                // res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << l - 1 << endl;
    }
}