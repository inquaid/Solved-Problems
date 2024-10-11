#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size() - 1;
    int a = 0, b = 0;
    int cnt = 0;
    for (int i = 0; i <= n; i++) {
        if (s[i] == '(') {
            a++;
        } else {
            if (a > 0)
                cnt += 2;
            a--;
            a = max(a, 0);
        }
        // cout << s[i];
    }
    for (int i = 0; i < n; i++) {
        if (1 == 2) {

        } else {
        }
    }

    cout << cnt;
}