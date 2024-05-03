#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
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
    int n;
    cin >> n;   
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == mp[mp[v[i]]])
        {
            cout << 2;
            return;
        }
    }
    cout << 3;
}