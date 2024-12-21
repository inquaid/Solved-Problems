#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int cnt = 1;
        for (int i = 0; i < n - 2; ++i) {
            if(s[i] != s[i + 2]) cnt++;
        }
        cout << cnt;

        newline;
    }
}

void solve() { 
    tTestCase(); 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}