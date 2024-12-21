#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define yes cout << "YES"
#define no cout << "NO"
#define ll long long
#define int long long

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int digit = 1;
        vector<int> v(n, 0);
        for (int i = k - 1; i < n; i += k) {
            v[i] = digit++;
        }

        for (int i = 0; i < n; ++i) {
            if (v[i] == 0) {
                v[i] = digit++;
            }
        }

        for (auto i : v)
            cout << i << " ";

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