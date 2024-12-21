#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<int> pq;
        int res = 0;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            if (temp == 0) {
                if (pq.empty() == false) {
                    res += pq.top();
                    pq.pop();
                }
            } else
                pq.push(temp);
        }
        cout << res;
        newline;
    }
}

void solve() { tTestCase(); }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}