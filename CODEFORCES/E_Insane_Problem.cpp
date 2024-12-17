#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

int k, l1, r1, l2, r2;

int binarySearch(int kn) {

    int l = l1, r = r1, lower = -1, upper = -1;
    while (l <= r) {
        int x = l + (r - l) / 2;
        int y = kn * x;
        if (l2 <= y and y <= r2) {
            lower = x;
            r = x - 1;
        } else if (y < l2) {
            l = x + 1;
        } else {
            r = x - 1;
        }
    }

    l = l1, r = r1;

    while (l <= r) {
        int x = l + (r - l) / 2;
        int y = kn * x;
        if (l2 <= y and y <= r2) {
            upper = x;
            l = x + 1;
        } else if (y < l2) {
            l = x + 1;
        } else {
            r = x - 1;
        }
    }

    if (lower == -1 or upper == -1)
        return 0;
    return max(0LL, upper - lower + 1);
}

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int kn = 1, res = 0;
        for (int i = 0; i < 32; ++i) {
            if (kn > r2)
                break;

            res += binarySearch(kn);
            kn *= k;
        }
        cout << res;
        newline;
    }
}

void solve() { tTestCase(); }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}