#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i.first << " " << i.second << endl;
    }
    // int res = 0;
    // for (int i = 0; i < n - 1; i++) {
    //     if (v[i].second == v[i + 1].first) {
    //         res++;
    //     }
    // }
    // cout << res;
}