#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]--;
    }
    int cnt = 0, res = 0;
    for (auto i : mp) {
        cnt += i.second;
        res = max(res, cnt);
    }
    cout << res;
}