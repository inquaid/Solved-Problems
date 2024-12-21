#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define yes cout << "YES"
#define no cout << "NO"
#define ll long long
#define int long long
#define yesif(flag) cout << ((flag) ? "YES" : "NO")

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        cout << 1 << sp << n << sp;
        int cnt = count(s.begin(), s.end(), '1');
        if (cnt == 0 or cnt == n) {
            cout << 1 << sp << 1;
        } else if (s.find("10") == string::npos) {
            cout << 1 << sp << 1;
        } else {
            string temp = "";
            int l1 = 0, zero = 0;
            while (s[l1] != '1' and l1 < n) {
                l1++;
            }
            while (s[l1] == '1') {
                temp += s[l1];
                l1++;
            }
            string check = "";
            int l2 = 0, i = 0, r2 = n - l1;
            for (i = l1; i < n; ++i) {
                if (s[i] == '1') {
                    check += '0';
                } else
                    check += '1';
                if (temp.find(check) == string::npos) {
                    break;
                } else {
                    l2 = temp.find(check);
                }
                temp += s[i];
            }
            cout << l2 + 1 << sp << l2 + r2;
        }

        newline;
    }
}

void solve() { tTestCase(); }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}