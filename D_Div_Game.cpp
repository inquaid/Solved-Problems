#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 10000000;
vector<int> lp(N + 1);
vector<int> pr;

void seive() {
    for (int i = 2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i]) {
                break;
            }
        }
    }
}

signed main() {
    seive();
    int n;
    cin >> n;

    int res = 0;
    for (auto i : pr) {
        // cout << i << " ";
        if (i * i > n)
            break;
        int cnt = 0;
        bool flag = false;
        while (n % i == 0) {
            cnt++;
            flag = true;
            n /= i;
        }
        if (flag)
            res += floor((-1 + sqrt(1 + (8 * cnt))) / 2.0);
        // cout << i << " " << cnt << endl;
    }
    if (n > 1)
        res += floor((-1 + sqrt(1 + (8 * 1))) / 2.0);
    cout << res;

    return 0;
}