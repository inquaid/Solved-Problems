#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1) {
            cout << s << endl;
            continue;
        }
        map<char, int> mp;
        int minimum = INT_MAX, maximum = INT_MIN;
        char mn = s[0], mx = s[0];
        for (auto c : s) {
            mp[c]++;
        }

        for (auto i : mp) {
            if (i.second < minimum) {
                minimum = i.second;
                mn = i.first;
            }
            if (i.second > maximum) {
                maximum = i.second;
                mx = i.first;
            }
        }
        if (mn == mx) {
            string s2 = s;
            sort(s2.begin(), s2.end());
            mn = s2[0];
            mx = s2[n - 1];
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == mn) {
                s[i] = mx;
                break;
            }
        }
        cout << s;
        cout << endl;
    }
}