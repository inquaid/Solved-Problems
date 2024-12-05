#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int i = 0, j = 0, res = LLONG_MAX, sum = 0;

    while (j < n) {
        sum += v[j];
        while (sum >= s) {
            res = min(res, j - i + 1);
            sum -= v[i];
            i++;
        }
        j++;
    }
    if (res == LLONG_MAX)
        res = -1;
    cout << res;
}