#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve();
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    if (n <= k)
    {
        cout << 1 << endl;
        return;
    }
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    int ans = n;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i <= k)
                ans = min(ans, n / i);
            if (n / i <= k)
                ans = min(ans, i);
        }
    }
    cout << ans << endl;
}