#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (i + 1 < n and s[i] == s[i + 1]) {
            cout << i + 1 << " " << i + 2;
            return 0;
        }
        if (i + 2 < n and s[i] == s[i + 2]) {
            cout << i + 1 << " " << i + 3;
            return 0;
        }
    }

    cout << -1 << " " << -1;
}