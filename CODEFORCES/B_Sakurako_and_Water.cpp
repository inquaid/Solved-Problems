#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mtx[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mtx[i][j];
            }
        }
        int res = 0;
        // cout << endl;
        for (int i = 0; i < n; i++) {
            int temp = i, store = 0;
            for (int j = 0; j < n; j++, temp++) {
                if (temp >= n)
                    break;
                // cout << mtx[temp][j] << " ";
                if (mtx[temp][j] < 0) {
                    store = max(store, abs(mtx[temp][j]));
                }
            }
            res += store;
            // cout << endl;
        }
        // cout << endl;

        for (int i = 1; i < n; i++) {
            int temp = i, store = 0;
            for (int j = 0; j < n; j++, temp++) {
                if (temp >= n)
                    break;
                // cout << mtx[j][temp] << " ";
                if (mtx[j][temp] < 0) {
                    // res += abs(mtx[j][temp]);
                    store = max(store, abs(mtx[j][temp]));
                }
            }
            res += store;
        }
        cout << res << endl;
    }
}