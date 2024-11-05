/**
 * first solved it from siam's ID,
 * as i was in class
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int one = count(s.begin(), s.end(), '1');
        int zero = count(s.begin(), s.end(), '0');
        if (one == zero)
            cout << 0 << endl;
        else {
            int n = s.size(), i;
            for (i = 0; i < n; i++) {
                if (s[i] == '1' and zero)
                    zero--;
                else if (s[i] == '0' and one)
                    one--;
                else {
                    break;
                }
            }
            cout << n - i << endl;
        }
    }
}