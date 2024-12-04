#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vp(n), pos, neg;
        for (int i = 0; i < n; i++) {
            cin >> vp[i];
        }
        int zero = 0, negative = 0, positive = 0;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if (temp >= vp[i]) {
                pos.push_back(temp - vp[i]);
                positive++;
            } else {
                neg.push_back(vp[i] - temp);
                negative++;
            }
        }
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());
        int res = 0;

        int i = 0, j = 0;
        int sz = pos.size(), iSz = neg.size();
        while (j < sz and i < iSz) {
            if (neg[i] <= pos[j]) {
                res++;
                i++;
                j++;
                positive--;
                negative--;
            } else
                j++;
        }
        if (positive > 0) {
            res += floor(positive / 2.0);
        }

        cout << res << endl;
    }
}