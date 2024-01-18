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
    int a;
    cin >> a;
    if (a % 2050 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        a /= 2050;
        int ans = 0;
        while (a > 0)
        {
            ans += a % 10;
            a /= 10;
        }
        cout << ans << endl;
    }
}