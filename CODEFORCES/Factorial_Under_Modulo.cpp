#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M = 998244353;

signed main() {
    int n;
    cin >> n;
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = ((res % M) * (i % M)) % M;
    }
    cout << res % M;
}