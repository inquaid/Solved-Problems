#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;
        int res = 0;

        map<pair<int, int>, int> mp;
        set<pair<int, int>> st;
        // for king
        for (int i = 0; i < 8; i++) {

            int tempX = 0, tempY = 0;
            // cout << ((i >> 0) & 1) << ((i >> 1) & 1) << endl;
            if ((i >> 0) & 1) {
                tempX = xK + a;
            } else {
                tempX = xK - a;
            }
            if ((i >> 1) & 1) {
                tempY = yK + b;
            } else {
                tempY = yK - b;
            }

            // mp[{tempX, tempY}]++;
            st.insert({max(tempX,tempY), min(tempX,tempY)});
            // st.insert({tempX, tempY});
            if (i == 3)
                swap(a, b);
        }

        for (auto i : st) {
            mp[i]++;
        }
        st.clear();
        // for queen
        for (int i = 0; i < 8; i++) {

            int tempX = 0, tempY = 0;

            if ((i >> 0) & 1) {
                tempX = xQ + a;
            } else {
                tempX = xQ - a;
            }
            if ((i >> 1) & 1) {
                tempY = yQ + b;
            } else {
                tempY = yQ - b;
            }

            mp[{tempX, tempY}]++;
            st.insert({max(tempX,tempY), min(tempX,tempY)});
            if (i == 3)
                swap(a, b);
        }
        for (auto i : st) {
            mp[i]++;
        }

        for (auto i : mp) {
            // cout << i.first.first << " " << i.first.second << "\t" << i.second
            //      << endl;
            if (i.second > 1)
                res++;
        }

        // cout << endl;
        // cout << endl;
        // cout << res << endl;
    }
}