#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, k;
        cin >> l >> r >> k;
        cout << max(0, (r / k) - l + 1) << endl;
    }
}