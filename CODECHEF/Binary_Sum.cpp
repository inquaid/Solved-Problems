// if greater than 1:
//     min_zero = total - 1
//     max_zero = total + 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int minSize = k + k - 1;
        int maxSize = k + k + 1;
        if (n >= minSize and n <= maxSize) {
            cout << "YES\n";
        } else
            cout << "NO\n";
    }
}