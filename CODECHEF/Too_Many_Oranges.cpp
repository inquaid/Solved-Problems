#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k >= (10 * n) and k <= (12 * n)) {
            cout << "YES\n";
        } else
            cout << "NO\n";
    }
}
