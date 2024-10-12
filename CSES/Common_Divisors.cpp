#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
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
vector<int> res(N + 1);
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int div = 1; div * div <= x; div++) {
            if (x % div == 0) {
                res[div]++;
                if (x / div != div) {
                    res[x / div]++;
                }
            }
        }
    }
    for (int i = N; i > 0; i--) {
        if (res[i] > 1) {
            cout << i;
            break;
        }
    }
    return 0;
}