#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e8;
vector<int> lp(N + 1);
vector<int> pr;

void seive() {
    for (int i = 2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
            if (i == 99998953)
                return;
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

    // ios::sync_with_stdio(0);
    // cin.tie(0);

    seive();
    int n = pr.size();
    for (int i = 0; i < n; i+=100) {
        cout << pr[i] << "\n";
    }
}