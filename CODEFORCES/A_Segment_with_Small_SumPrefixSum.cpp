#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int i = 0, j = 0, sum = 0, res = 0;
    while (j < n) {
        sum += v[j];
        while (sum > s and i < n) {
            sum -= v[i];
            i++;
        }
        if (sum <= s)
            res = max(res, j - i + 1);
        j++;
    }
    cout << res;
}
