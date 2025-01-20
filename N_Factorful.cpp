#include <bits/stdc++.h>
using namespace std;

int f(string &s1, string &s2, int i, int n, bool first) {
    if ((s1.size() + s2.size()) > n or (i >= (2 * n)))
        return -1;
    cout << "? " << s1 + s2 << endl;

    int check;
    cin >> check;
    if (first) {
        if (check) {
            s2 = s1 + s2;
            return 1;
        } else {
            if (s1 == "0") {
                s1 = "1";
                return 1 + f(s1, s2, i + 1, n, first);
            } else {
                return -1;
            }
        }
    } else {
        if (check) {
            s1 = s1 + s2;
            return 1;
        } else {
            if (s2 == "0") {
                s2 = "1";
                return 1 + f(s1, s2, i + 1, n, first);
            } else {
                return -1;
            }
        }
    }
}

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = "";
        int i = 0;

        while (i < (2 * n) and i >= 0) {
            string t = "0";
            int temp = f(t, s, i, n, true);
            if (temp <= 0)
                break;
            i += temp;
        }
        while (i < (2 * n) and i >= 0) {
            string t = "0";
            int temp = f(s, t, i, n, false);
            if (temp <= 0) {
                break;
            }
            i += temp;
        }
        if (s.size() != n)
            s = s + "1";
        cout << "! " << s << endl;
    }
}

void solve() { tTestCase(); }

int main() { solve(); }