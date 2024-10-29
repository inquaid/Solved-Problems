#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            mp[temp]++;
            if (mp[temp] == 1) {
                a.push_back(temp);
            }
        }

        sort(a.begin(), a.end());

        int indx = a.size();
        int res = mp[a[0]], ans = res, cnt = 1;

        for (int i = 1; i < indx; i++) {
            if (a[i - 1] + 1 == a[i]) {
                res += mp[a[i]];
                cnt++;
            } else {
                ans = max(res, ans);
                res = mp[a[i]];
                cnt = 1;
            }
            if (cnt > k) {
                res -= mp[a[i - k]];
                cnt--;
            }
            ans = max(res, ans);
        }

        cout << ans << endl;
    }

    return 0;
}
