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

        vector<int> sides;

        for (auto i : mp) {
            while (i.second >= 2) {
                sides.push_back(i.first);
                sides.push_back(i.first);
                i.second -= 2;
            }
        }
        // for (auto i : sides) {
        //     cout << i << " ";
        // }
        // cout << endl;
        if (sides.size() < 8) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            int sz = sides.size();
            cout << sides[0] << " " << sides[2] << " " << sides[1] << " "
                 << sides[sz - 1] << " " << sides[sz - 3] << " " << sides[3]
                 << " " << sides[sz - 3] << " " << sides[sz - 1];

            cout << endl;
        }
    }
}
