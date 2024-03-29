#include <bits/stdc++.h>
using namespace std;
// #define int long long
void solve();
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
        cout << "\n";
    }
}
void solve()
{
    int n, temp;
    cin >> n;
    map<int, int> mp;
    map<int, vector<int>> mvp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
        mvp[temp].push_back(i);
    }
    for (auto i : mp)
    {
        if (i.second == 1)
        {
            cout << -1;
            return;
        }
    }
    for (auto i : mvp)
    {
        int size = i.second.size();
        cout << i.second[size - 1] + 1 << " ";
        for (int k = 0, j = size - 1; k < size - 1; k++, j--)
        {
            cout << i.second[k] + 1 << " ";
        }
    }
}