#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve();

int main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, tm, tmp;
    map<int, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tm >> tmp;
        if (mp.find(tmp) == mp.end())
            mp[tmp] = tm;
        else
            mp[tmp] = min(tm, mp[tmp]);
    }
    // for (auto i : mp)
    // {
    //     cout << i.first << " " << i.second << " ";
    // }
    if (mp.find(11) != mp.end() || mp.find(10) != mp.end() && mp.find(1) != mp.end())
    {
        if (mp.find(11) == mp.end())
        {
            cout << mp[10] + mp[1];
        }
        else if (mp.find(10) == mp.end() || mp.find(1) == mp.end())
            cout << mp[11];
        else
        {
            cout << min(mp[11], mp[10] + mp[1]);
        }
    }
    else
        cout << -1;
    cout << endl;
}
