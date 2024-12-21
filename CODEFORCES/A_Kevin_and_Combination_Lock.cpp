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
        int n;
        cin >> n;
        cout << (n % 33 == 0 ? "YES" : "NO");
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