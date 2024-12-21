#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define yes cout << "YES"
#define no cout << "NO"
#define ll long long
#define int long long

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int res = INT_MAX;
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            if (temp % k == 0)
                res = 0;
            else
                res = min(res, k - (temp % k));
            if (k == 4) {
                if (temp % 2 == 0) {
                    pq.push(0);
                } else
                    pq.push(1);
            }
        }
        if (k == 4 and pq.size() >= 2) {
            int a = pq.top();
            pq.pop();
            res = min(res, a + pq.top());
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