#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);

    int n;
    cin >> n;

    vector<pair<int, int>> vpr;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        vpr.push_back({l, r});
        mx = max(mx, r);
    }


    sort(vpr.begin(), vpr.end());

    int cnt = vpr[0].second - vpr[0].first;
    int res = 0, last = vpr[0].second;

    for (int i = 1; i < n; i++) {
        int a = vpr[i].first;
        int b = vpr[i].second;
        if (b > last) {
            int tempMax = max(last, a);
            cnt += b - tempMax;
            last = b;
        }
    }

    int canSubstract = LONG_LONG_MAX, prevMin = LONG_LONG_MAX;
    if (vpr[1].second <= vpr[0].second) {
        // res = vpr[0].second - vpr[0].first;
        prevMin = 0;
        canSubstract = 0;
    }
    for (int i = 1; i < n - 1; i++) {
        int e = vpr[i - 1].first;
        int f = vpr[i - 1].second;
        int a = vpr[i].first;
        int b = vpr[i].second;
        int c = vpr[i + 1].first;
        int d = vpr[i + 1].second;

        int contribution = min(b, c) - max(a, f);
        canSubstract = min(canSubstract, contribution);
    }
    int dist = vpr[n - 1].second - vpr[n - 1].first;
    canSubstract = min(canSubstract, vpr[n - 1].second - max(vpr[n - 2].second,
                                                             vpr[n - 1].first));
    canSubstract = max(canSubstract, 0LL);
    cout << cnt - canSubstract;
}