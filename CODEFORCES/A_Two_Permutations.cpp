#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long
#define YES cout << "Yes\n"
#define NO cout << "No\n"


void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n , a, b;
        cin >> n >> a >> b;
        if((a + b + 2) <= n or (a == b and a == n)){
            YES;
        }else NO;  
    }
}

void solve() { tTestCase(); }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}