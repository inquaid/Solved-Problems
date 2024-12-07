#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    int temp;
    int n;
    int i;
    while (t--) {
        cin >> n;
        int sum = 0;
        for (i = 0; i < n; i++) {
            cin >> temp;
            if (i >= (n - 2)) {
                sum = temp - sum;
            } else
                sum += temp;
        }
        cout << sum << endl;
    }
}



    