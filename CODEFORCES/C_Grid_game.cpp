#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool posA = true, posB = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '1') {
            if (posA) {
                cout << "1 1\n";
                posA = false;
            } else {
                cout << "1 3\n";
                posA = true;
            }
        } else {
            if (posB) {
                cout << "3 4\n";
                posB = false;
            } else {
                cout << "1 4\n";
                posB = true;
            }
        }
    }
}
