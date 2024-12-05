#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, total = 0, res = 0;
        cin >> n >> m;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            int temp = s.size();
            if (ok and (total + temp) <= m) {
                total += temp;
                res++;
            } else {
                ok = false;
            }
        }
        cout << res << endl;
    }
}