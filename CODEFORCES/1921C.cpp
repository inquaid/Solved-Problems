#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

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
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int re = 0, mn;

    for (int i = 0; i < n; i++)
    {
        mn = min(b, abs(v[i] - re) * a);
        f -= mn;
        re = v[i];
    }
    if (f > 0)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}