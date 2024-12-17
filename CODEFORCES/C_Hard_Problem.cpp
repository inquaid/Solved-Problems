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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        // m *= 2;
        int res = min(m, a) + min(m, b);
        m = (m * 2) - res;
        if(m > 0){
            res += min(m, c);
        } cout << res;
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