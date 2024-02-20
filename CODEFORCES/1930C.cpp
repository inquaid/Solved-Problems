#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long

void solve();

signed main()
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

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    map<int, vector<int>, greater<int>> mp;

    for (int i = 0; i < n; i++)
    {
        mp[i + 1 + v[i]].push_back(i);
    }

    set<int> present;
    vector<int> second(n);
    for (int i = 0, j = -1; i < n; i++)
    {
        if (present.empty() || (!mp.empty() && j == mp.begin()->first))
        {
            for (int something : mp.begin()->second)
            {
                present.insert(something);
            }
            j = mp.begin()->first;
            mp.erase(mp.begin());
        }
        second[i] = j--;
        present.erase(present.begin());
    }
    for (auto i : second)
    {
        cout << i << " ";
    }
    cout << endl;
}
