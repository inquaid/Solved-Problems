#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, r;
        cin >> s >> r;
        stack<int> st;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                s[i] = r[i];
                s.erase(i + 1, 1);
                r.erase(i, 1);
                n--;
                i = 0;
                // cout << s << "\n" << r << endl;
            }
        }
        // cout << s << " ";
        if (s.empty()) {
            cout << "YES\n";
        } else
            cout << "NO\n";
    }
}
