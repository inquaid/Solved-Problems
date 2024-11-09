#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(), a.end());
        // for(auto i : a)
        //     cout << i << " ";
        // continue;
        if ((a[0] == 3 and a[1] == 3 and a[2] == 3) or
            (a[0] == 0 and a[1] == 4 and a[2] == 4) or
            (a[0] == 2 and a[1] == 2 and a[2] == 2) or
            (a[0] == 0 and a[1] == 3 and a[2] == 6) or
            (a[0] == 1 and a[1] == 2 and a[2] == 4) or
            (a[0] == 1 and a[1] == 1 and a[2] == 6)) {
            cout << "Case " << i << ": perfectus\n";
        } else
            cout << "Case " << i << ": invalidum\n";
    }
}