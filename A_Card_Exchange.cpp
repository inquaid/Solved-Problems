#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}

void solve()
{
    int temp, n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
    }

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}