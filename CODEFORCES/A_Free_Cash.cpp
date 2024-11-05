#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, res = -1;
    cin >> t;
    map<pair<int, int>, int> mp;
    while (t--) {
        int h, m;
        cin >> h >> m;
        mp[{h, m}]++;
        res = max(res, mp[{h, m}]);
    }
    cout << res;
}