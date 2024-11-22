#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int res = 0, sum = 0;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            res += ceil(temp / (x * 1.0));
            sum += temp;
        }
        cout << (int)ceil(sum / (x * 1.0)) << " " << (int)res << endl;
    }
}