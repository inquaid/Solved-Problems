#include <bits/stdc++.h>
using namespace std;
void solve();
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int k = n - 2;
    for (int i = 0; i < n; i++) {
        int temp = k / a[i];
        if (k % a[i] == 0)
            if ((temp == a[i] and mp[temp] > 1) or
                (temp != a[i] and mp[temp] > 0)) {
                cout << temp << " " << a[i] << endl;
                return;
            }
    }
}