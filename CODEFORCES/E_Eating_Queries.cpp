#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sort(all(a), greater<int>());
        for (int i = 1; i < n; i++) {
            a[i] += a[i - 1];
        }

        while (q--) {
            int x;
            cin >> x;
            if (x > sum) {
                cout << -1 << endl;
                continue;
            }
            cout << lower_bound(all(a), x) - a.begin() + 1 << endl;
            // int l = 0, r = n - 1;
            // while (l <= r) {
            //     int mid = l + (r - l) / 2;
            //     if (a[mid] >= x) {
            //         r = mid - 1;
            //     } else
            //         l = mid + 1;
            // }
            // cout << r + 2 << endl;
        }
    }
}