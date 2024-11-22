#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n, who;
        cin >> n >> who;
        // if (n & 1)
        //     n--;
        // if (n == 0) {

        //     continue;
        // }
        // if (who & 1) {
        //     cout << "Evenius\n";
        // } else {
        // }
        cout << "Case " << i << ": ";
        if (n % 2 == 0) {
            cout << "Oddius\n";
        } else {
            n -= 1;
            n /= 2;
            if (n == 0) {
                if (who == 1) {
                    cout << "Evenius\n";
                } else
                    cout << "Oddius\n";
            } else {
                if (n % 2 == 0) {
                    if (who == 1) {
                        cout << "Oddius\n";
                    } else
                        cout << "Evenius\n";
                } else {

                    cout << "Oddius\n";
                }
            }
        }
        // if (n == 3)
        //     cout << "Oddius\n";
        // else if (n % 2 != 0) {
        //     if (n == 1) {
        //         if (who == 1) {
        //             cout << "Evenius\n";
        //         } else
        //             cout << "Oddius\n";
        //     } else {
        //         if (who == 1) {
        //             cout << "Oddius\n";

        //         } else
        //             cout << "Evenius\n";
        //     }
        //     // cout << "Oddius\n";
        //     // cout << "Oddius\n";
        //     // cout <<
        // } else {
        //     cout << "Oddius\n";
        // }
    }
}