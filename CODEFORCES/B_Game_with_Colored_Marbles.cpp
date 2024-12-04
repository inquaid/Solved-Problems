#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        int aliceScore = 0, cntOne = 0;
        for (auto i : mp) {
            if (i.second == 1)
                cntOne++;
            else if (i.second > 1)
                aliceScore++;
        }
        cout << aliceScore + (ceil(cntOne / 2.0) * 2) << endl;
    }
}