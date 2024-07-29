#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, x;
    cin >> n >> x;
    multimap<int, int> mp;
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
    }

    cout << "IMPOSSIBLE";
}