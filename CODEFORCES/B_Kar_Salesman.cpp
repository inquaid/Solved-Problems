#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, x;
        cin >> n >> x;
        int mx = -1, sum = 0;
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            sum += temp;
            mx = max(mx, temp);
        }
        cout << max(mx, (int)ceil(sum / (x * 1.0))) << endl;
    }
}