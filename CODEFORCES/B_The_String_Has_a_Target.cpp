#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, res = 0;
        cin >> n;
        string s;
        cin >> s;
        char minimum = 'z';
        bool check = false;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] < minimum) {
                res = i;
                minimum = s[i];
                check = true;
                // break;
            }
        }
        if (check) {
            cout << s[res];
            for (int j = 0; j < n; j++) {
                if (j != res)
                    cout << s[j];
            }
        } else
            cout << s;
        cout << endl;
    }
}