#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
    int n;
    cin >> n;
    int res = 1e9 + 900;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        res = min(res, v[i]);
    }

    bool chk = true;
    for (int i = 0; i < n; i++) {
        int need = v[i] - res;
        if (need == 0)
            continue;
        bool ok = false;

        for (int check = 1; check * check <= need; check++) {
            if (need % check == 0) {
                ok = true;
                break;
            }
        }

        if (!ok) {
            chk = false;
            break;
        }
    }

    if (chk)
        cout << res;
    else
        cout << res / 2;
}
