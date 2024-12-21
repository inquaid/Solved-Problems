#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define newline cout << "\n"
#define ll long long
#define int long long

void tTestCase() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto ch : s)
            mp[ch]++;

        int oddOccurance = 0, evenOccurance = 0;
        for (auto i : mp) {
            if (i.second % 2 == 0) {
                evenOccurance++;
            } else
                oddOccurance++;
        }

        if ((n - k) % 2 == 0) {
            k -= oddOccurance;
            if (k >= 0 and k % 2 == 0) {
                cout << "YES";
            } else
                cout << "NO";
        } else {
            if (oddOccurance == 0 and k % 2 != 0) {
                cout << "YES";
            } else {
                oddOccurance--;
                k -= oddOccurance;
                if (k >= 0 and k % 2 == 0) {
                    cout << "YES";
                } else
                    cout << "NO";
            }
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