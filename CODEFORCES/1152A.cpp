#include <bits/stdc++.h>
using namespace std;
// #define int long long
void solve();
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
void solve()
{
    int n, m, odd = 0, odd1 = 0, temp;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        if (temp & 1)
            odd++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp & 1)
            odd1++;
    }
    cout << min(odd, n - odd1) + min(m - odd, odd1) << endl;
}
