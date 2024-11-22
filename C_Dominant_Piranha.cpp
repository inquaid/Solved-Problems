#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), tray;
        for (auto &i : a)
            cin >> i;

        bool okay = true;
        int indx = -1;

        for (int i = 0; i < n - 1; i++) {
            indx = i;
            if (a[i] < a[i + 1])
                break;
            tray.push_back(a[i] - a[i + 1]);
        }
        indx++;
        for (int i = indx; i < n - 1; i++) {
            if (a[i] > a[i + 1])
                break;
            // indx = i;
            tray.push_back(a[i + 1] - a[i]);
        }
        // for (auto i : tray)
        //     cout << i << " ";
        for (int i = 1; i < n; i++) {
            if (abs(tray[i] - tray[i - 1]) > 1) {
                okay = false;
            }
        }
        cout << indx << endl;
        // if (okay) {
        //     if (a[indx - 2] <= a[indx - 1] and a[indx - 1] <= a[indx])
        //         cout << indx << endl;
        //     else
        //         cout << -1 << endl;

        // } else
        //     cout << -1 << endl;
    }
}