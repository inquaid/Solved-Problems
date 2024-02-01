#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

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
    int n;
    cin >> n;
    vector<int> v(n), V(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    for (auto &i : V)
    {
        cin >> i;
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]] = V[i];
    }

    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " ";
    }
    cout << endl;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).second << " ";
    }

    cout << endl;
}