#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n <= 2) {
            cout << n << endl;
            continue;
        }
        int i = 1, sum = 0, mx = 0;
        while ((mx - 1) < n) {
            i++;
            sum += (1 << (i - 2));
            mx = (1 << i) + sum;
        }
        cout << i << endl;
    }
}