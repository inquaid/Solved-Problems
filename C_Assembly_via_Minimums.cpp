#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int sz = (n * (n - 1)) / 2;
        // set<int, greater<int>()> st;
        map<int, int> mp;
        for (int i = 0; i < sz; i++) {
            int temp;
            cin >> temp;
            // st.insert(temp);
            mp[temp]++;
        }
        int temp = 0, i = 0;
        int currNedd = 0, totalHas = 1, prevHad = 0;
        for (auto iter : mp) {
            // cout << iter.first << " ";
            int minNeed = iter.second;
            // int totalAdded = totalHas;
            int total = (totalHas * (totalHas - 1));
            if (totalHas <= 1)
                total = 1;
            while (total < minNeed) {
                totalHas++;
                total = (totalHas * (totalHas - 1));
            }
            // cout << totalHas << " ";
            bool chk = true;
            for (int indx = 0; indx < (totalHas - prevHad); indx++) {
                chk = false;
                cout << iter.first << " ";
                temp++;
            }
            if (chk) {
                temp++;
                cout << iter.first << " ";
            } // totalHas = totalAdded;
            prevHad = totalHas;
        }

        for (int i = 0; i < (n - temp); i++) {
            cout << (int)1e9 << " ";
        }
        cout << endl;
    }
}