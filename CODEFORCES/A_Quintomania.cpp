#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        bool perfect = true;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n - 1; i++) {
            int diff = abs(v[i] - v[i + 1]);
            if (diff != 5 and diff != 7)
                perfect = false;
        }
        if (perfect)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}