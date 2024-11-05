#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            mp[b] += c;
        }
        int res = 0, j = 0;
        vector<int> v;
        for (auto i : mp) {
            v.push_back(i.second);
            j++;
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n and i < k and i < j; i++) {
            res += v[i];
        }
        cout << res << endl;
    }
}