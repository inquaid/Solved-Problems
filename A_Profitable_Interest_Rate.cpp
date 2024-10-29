#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a <= (b / 2)) {
            cout << 0 << endl;
        } else if (a >= b) {
            cout << a << endl;
        } else {
            cout << ((2 * a) - b) << endl;
        }
    }
}