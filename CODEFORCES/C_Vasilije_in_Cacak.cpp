#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define yes cout << "YES"
#define no cout << "NO"
#define ll long long
#define int long long

int sum(int n) { return (n * (n + 1)) / 2; }

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        int minLim = sum(k), maxLim = sum(n) - sum(n - k);
        if (minLim <= x and x <= maxLim) {
            yes;
        } else
            no;
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