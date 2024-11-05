#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;
        int n = s.size(), cnt = 0;
        bool present = false;
        unordered_set<int> pos;
        for (int i = 0; i < n - 3; i++) {
            if (s.substr(i, 4) == "1100") {
                present = true;
                pos.insert(i);
            }
        }

        while (q--) {
            int i, v;
            cin >> i >> v;
            i--;
            char _v = v + '0';
            if (s[i] != _v) {
                for (int j = max(0, i - 3); j < min(n - 3, i + 3); j++) {
                    if (s.substr(j, 4) == "1100") {
                        pos.erase(j);
                    }
                }
                s[i] = _v;
                for (int j = max(0, i - 3); j < min(n - 3, i + 3); j++) {
                    if (s.substr(j, 4) == "1100") {
                        pos.insert(j);
                    }
                }
            }
            if (pos.empty() == false)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}