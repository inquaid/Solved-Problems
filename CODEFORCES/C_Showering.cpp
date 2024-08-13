#include <bits/stdc++.h>
using namespace std;

void solve();

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
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    if (v[0].first >= s)
    {
        cout << "YES\n";
        return;
    }
    if ((m - v[v.size() - 1].second) >= s)
    {
        cout << "YES\n";
        return;
    }

    for (int i = 1; i < n; i++)
    {
        int dis = v[i].first - v[i - 1].second;
        if (dis >= s)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}