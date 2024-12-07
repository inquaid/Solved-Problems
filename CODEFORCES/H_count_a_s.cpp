#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;

    vector<int> prex;
    prex.push_back(0);
    int cnt = 0;
    for (auto chars : s) {
        if (chars == 'a')
            cnt++;
        prex.push_back(cnt);
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        l -= 1;
        // r--;
        cout << prex[r] - prex[l] << endl;
    }
}