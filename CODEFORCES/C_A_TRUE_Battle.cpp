#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        if (s[0] == '1' or s[n - 1] == '1' or s.find("11") != string::npos) {
            cout << "YES\n";
        } else
            cout << "NO\n";
    }
}