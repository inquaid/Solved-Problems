#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ln 200010

vector<int> v(ln + 10, 0);

signed main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]--;
    }
    int res = 0, temp = 0;
    for (auto i : mp)
    {
        temp += i.second;
        res = max(res, temp);
    }
    cout << res << "\n";
}