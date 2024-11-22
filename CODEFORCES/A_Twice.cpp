#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            mp[temp]++;
        }
        int res = 0;
        for (auto i : mp) {
            if (i.second & 1) {
                res += i.second - 1;
            } else
                res += i.second;
        }
        cout << res / 2 << endl;
    }
}