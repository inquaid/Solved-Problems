#include <bits/stdc++.h>
#define vi vector<int>

using namespace std;
void solve();
map<int, bool> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    mp.clear();

    int n;
    cin >> n;
    vi a(n);
    for (auto &i : a)
        cin >> i;
    mp[a[0]] = true;

    for (int i = 1; i < n; i++)
    {
        mp[a[i]] = true;
        if (mp[a[i] - 1] == 0 and mp[a[i] + 1] == 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}