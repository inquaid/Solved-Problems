#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 31; i >= 0; i--) {
        int one = 0, zero = 0;
        for (int j = 0; j < n; j++) {
            if ((a[j] >> i) & 1) {
                one++;
            } else
                zero++;
        }
        if (one %2 != 0 or zero %2 != 0) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}