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

int main() {
    // seive();
    int t;
    cin >> t;
    while (t--) {
        char c1, c2;
        cin >> c1 >> c2;
        int diff = abs(c1 - c2);
        for (int i = 1; i <= diff; i++) {
            if (diff % i == 0) {
                cout << i << " " << ceil(94.0 / (i * 1.0)) << endl;
            }
        }
        cout << endl;
    }

    // for (int i = 0; i < 95; i++) {
    //     cout << (char)('!' + i) << " ";
    // }
    // cout << '8' - '1';
}