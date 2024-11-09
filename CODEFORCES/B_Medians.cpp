#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n == 1)
            cout << "1\n1\n";
        else if (k == 1 or k == n) {
            cout << -1 << endl;
        } else if (!((k - 1) & 1)) {
            cout << "5\n1 2 " << k << " " << k + 1 << " " << k + 2 << endl;
        } else {
            cout << "3\n1 " << k << " " << k + 1 << endl;
        }
    }
}