#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 5) {
            cout << -1 << endl;
            continue;
        }
        for (int i = 2; i <= n; i += 2) {
            if (i == 4)
                continue;
            cout << i << " ";
        }
        if (!(n & 1))
            n--;
        cout << 4 << " " << 5 << " ";
        for (int i = n; i > 0; i -= 2) {
            if (i == 5)
                continue;
            cout << i << " ";
        }
        cout << endl;
    }
}