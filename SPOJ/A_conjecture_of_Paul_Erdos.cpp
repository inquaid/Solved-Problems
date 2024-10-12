#include <bits/stdc++.h>
using namespace std;
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
vector<int> ans(N + 1);
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int lastPrime = pr.back();
    for (int x = 1; x < 3165; x++) {
        for (int y = 1; y < 58; y++) {
            int theNum = (x * x) + (y * y * y * y);
            if (theNum > lastPrime)
                break;
            if (lp[theNum] == theNum)
                ans[theNum] = 1;
        }
    }
    for (int i = 1; i <= N; i++) {
        ans[i] += ans[i - 1];
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int temp;
        cin >> temp;
        cout << ans[temp] << "\n";
    }
}