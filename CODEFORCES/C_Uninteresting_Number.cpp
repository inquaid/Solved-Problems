#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve();
signed main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
void solve() {
    int n, sum = 0, two = 0, three = 0;
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++) {
        int temp = s[i] - '0';
        sum += temp;
        if (temp == 2) {
            two++;
        }
        if (temp == 3) {
            three++;
        }
    }
    if (sum % 9 == 0) {
        cout << "YES\n";
    } else {
        for (int i = 0; i <= two; i++) {
            for (int j = 0; j <= three; j++) {
                int store = sum + (2 * i) + (6 * j);
                if (store % 9 == 0) {
                    cout << "YES\n";
                    return;
                }
            }
        }
        cout << "NO\n";
    }
}