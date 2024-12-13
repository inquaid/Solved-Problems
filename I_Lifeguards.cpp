#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using customMultiSet = tree<T, null_type, less_equal<T>, rb_tree_tag,
                            tree_order_statistics_node_update>;

#define int long long
signed main() {
    // freopen("lifeguards.in", "r", stdin);
    // freopen("lifeguards.out", "w", stdout);

    int n, k;
    cin >> n >> k;

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

    customMultiSet<int> minimumContributions;
    int canSubstract = LONG_LONG_MAX, prevMin = LONG_LONG_MAX;
    if (vpr[1].second <= vpr[0].second) {
        // res = vpr[0].second - vpr[0].first;
        prevMin = 0;
        canSubstract = 0;
        minimumContributions.insert(0);
    }
    for (int i = 1; i < n - 1; i++) {
        int e = vpr[i - 1].first;
        int f = vpr[i - 1].second;
        int a = vpr[i].first;
        int b = vpr[i].second;
        int c = vpr[i + 1].first;
        int d = vpr[i + 1].second;

        int contribution = min(b, c) - max(a, f);
        // canSubstract = min(canSubstract, contribution);
        minimumContributions.insert(contribution);
    }
    minimumContributions.insert(vpr[n - 1].second -
                                max(vpr[n - 2].second, vpr[n - 1].first));
    for (int i = 0; i < minimumContributions.size(); i++) {
        cnt -= max(0LL, (*minimumContributions.find_by_order(i)));
        cout << (*minimumContributions.find_by_order(i)) << " ";
    }

    cout << cnt;
}