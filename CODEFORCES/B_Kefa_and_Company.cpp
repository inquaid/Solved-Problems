#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int numberOfFriends, minimumDifference;
    cin >> numberOfFriends >> minimumDifference;

    vector<pair<int, int>> vp;
    for (int i = 0; i < numberOfFriends; i++) {
        int money, friendshipFactor;
        cin >> money >> friendshipFactor;
        vp.push_back({money, friendshipFactor});
    }
    sort(vp.begin(), vp.end());

    int n = numberOfFriends;
    int i = 0, j = 0, res = 0;
    int temp = 0;
    while (j < n) {
        if ((vp[j].first - vp[i].first) < minimumDifference) {
            temp += vp[j].second;
            res = max(res, temp);
            j++;
        } else {
            temp -= vp[i].second;
            i++;
        }
    }
    cout << res << endl;
}