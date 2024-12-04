#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    int n, m, L;
    cin >> n >> m >> L;

    vector<int> hurdles(L + 1, 0);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        hurdles[l] = r - l + 2; // if WA change it to + 1
    }
    for (int i = 0; i < m; i++) {
        int x, v;
        cin >> x >> v;
        // powers.push_back(x).push_back(v);
        mp[x].push_back(v);
    }

    int i = 0, j = 0;
    
}