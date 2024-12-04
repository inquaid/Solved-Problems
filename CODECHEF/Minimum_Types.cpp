#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            v[i] *= temp;
        }
        sort(v.begin(), v.end(), greater<int>());
        int i = 0, total = 0;
        while (i < n and total < x) {
            total += v[i];
            i++;
        }
        if (total >= x) {
            cout << i << endl;
        } else
            cout << -1 << endl;
    }
}