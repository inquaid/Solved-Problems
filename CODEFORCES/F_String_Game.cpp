#include <bits/stdc++.h>
using namespace std;

bool isPossible(string p, string &t, vector<int> &v, int mid) {
    for (int i = 0; i < mid; ++i) {
        p[v[i] - 1] = '1';
    }
    int n = p.size(), iter = 0, m = t.size();
    for (int i = 0; i < n; ++i) {
        if (iter < m and p[i] == t[iter]) {
            iter++;
        }
    }
    return (iter == m);
}

int main() {
    string p, t;
    cin >> p >> t;
    int n = p.size();
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (isPossible(p, t, v, mid)) {
            l = mid + 1;
        } else
            r = mid - 1;
    }
    cout << l - 1;

    return 0;
}