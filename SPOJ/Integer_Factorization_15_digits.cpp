#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 3 * 1e7;
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
    do {
        // cout << n << endl;
        for (auto i : pr) {
            if (i * i > n)
                break;
            if (n % i == 0) {
                cout << i << "^";
                int cnt = 0;
                while (n % i == 0) {
                    cnt++;
                    n /= i;
                }
                cout << cnt << " ";
            }
        }
        if (n > 1) {
            cout << n << "^1 ";
        }
        cout << endl;
        cin >> n;
    } while (n != 0);

    return 0;
}