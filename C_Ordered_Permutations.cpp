#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;

        cin >> n >> k;
        if (n < 45 and k > (1LL << (n - 1LL))) {
            cout << -1 << endl;
            continue;
        }
        vector<int> a(n, n);

        int cnt = 1, prev = 0, i = 0, rightFill = 0, leftFill = 0;
        int total = 1;
        for (int i = 0; i < (n - 1) and i <= k; i++) {
            total *= 2LL;
        }
        cout << total << "->";
        while (i < (n - 1)) {
            // cout << i << " -> ";
            total /= 2LL;
            if (k <= (prev + total)) {
                a[leftFill] = cnt;
                cnt++;
                leftFill++;
                // prev += (1 << (n - i - 3));
                i++;
            } else {
                // cout << "e";
                a[n - rightFill - 1] = cnt;
                cnt++;
                rightFill++;
                prev += total;
                // cout << prev << " - > ";
                i++;
            }
        }
        for (auto i : a) {
            cout << i << " ";
        }
        cout << endl;
    }
}