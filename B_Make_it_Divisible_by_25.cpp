#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        // 00, 25, 50, 75
        int zero = 0, five = 0, res = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                zero = i;
            }

            if (s[i] == '5') {
                five = i;
            }

            if (zero and (s[i] == '0' or s[i] == '5')) {
                int res = zero - i;
                res += (n - zero - 1);
                cout << res << endl;
                break;
            }

            if (five and (s[i] == '2' or s[i] == '7')) {
                int res = five - i;
                res += (n - five - 1);
                cout << res << endl;
                break;
            }
        }
    }
}