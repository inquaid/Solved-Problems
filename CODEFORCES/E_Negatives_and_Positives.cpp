#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, sum = 0, mn = 1e9 + 9, neg = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if (abs(temp) < abs(mn)) {
                mn = temp;
            }
            sum += abs(temp);
            if (temp < 0)
                neg++;
        }
        // 1 2 -1 21 -2
        if (neg % 2 == 0)
            cout << sum << endl;
        else if (neg) {
            // cout << mn << endl;
            sum -= abs(mn);
            sum -= abs(mn);
            cout << sum << endl;
        } else
            cout << sum << endl;
    }
}