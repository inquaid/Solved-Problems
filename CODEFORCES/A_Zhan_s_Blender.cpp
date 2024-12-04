#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        double x, y;
        cin >> x >> y;
        cout << (int)ceil(n / min(x, y)) << endl;
    }
}