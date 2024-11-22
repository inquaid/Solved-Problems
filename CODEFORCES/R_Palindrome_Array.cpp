#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define vi vector<int>

int check(int i, vi &v) {
    if (i >= (v.size() / 2)) {
        return true;
    }
    // cout << v[i] << " " << v[v.size() - i - 1] << endl;
    if (v[i] != v[v.size() - i - 1]) {
        return false;
    }
    return check(i + 1, v);
    // return 1;
}

signed main() {
    int n;
    cin >> n;
    vi a(n);
    for (auto &i : a)
        cin >> i;
    int indx = 0;
    if (check(indx, a)) {
        cout << "YES\n";
    } else
        cout << "NO\n";
}