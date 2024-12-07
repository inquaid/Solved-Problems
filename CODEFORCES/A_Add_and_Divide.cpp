#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        int res = LONG_LONG_MAX;
        for (int i = 0; i < 50; i++) {
            int tempB = b + i;
            if (tempB == 1)
                continue;
            int tempRes = i;
            int tempA = a;
            while (tempA) {
                tempA = floor(tempA / (tempB * 1.0));
                tempRes++;
            }
            res = min(res, tempRes);
        }
        cout << res << endl;
    }
}