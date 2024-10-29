#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = 0, i = 1, j = 0;
        while (abs(x) <= n) {
            if (j & 1) {
                x += i;
            } else {
                x -= i;
            }
            i += 2;
            j++;
        }
        if (j & 1) {
            cout << "Sakurako\n";
        } else {
            cout << "Kosuke\n";
        }
    }
}