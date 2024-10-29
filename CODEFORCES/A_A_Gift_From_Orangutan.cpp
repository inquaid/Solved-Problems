#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            int temp;
            cin >> temp;
            cout << 0 << endl;
            continue;
        }
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        cout << (a[n - 1] - a[0]) * (n - 1) << endl;
        // cout << a[n - 1] << endl;
    }
}