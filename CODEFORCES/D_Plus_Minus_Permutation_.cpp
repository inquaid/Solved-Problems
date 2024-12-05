#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int tempX = floor(n / (x * 1.0)) - floor(n / lcm(x, y));
        int tempY = floor(n / (y * 1.0)) - floor(n / (lcm(x, y) * 1.0));
        x = n - tempX;
        y = tempY;
        cout << ((n * (n + 1)) - (x * (x + 1)) - (y * (y + 1))) / 2 << endl;
    }
}