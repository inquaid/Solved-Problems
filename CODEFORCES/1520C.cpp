#include <bits/stdc++.h>
using namespace std;
// #define int long long
void solve();

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    while (T--)
    {
        solve();
        cout << endl;
    }
}
void solve()
{
    int n, j;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return;
    }
    if (n == 2)
    {
        cout << -1;
        return;
    }
    j = n;

    n = n * n;
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
        if ((i + 1) % j == 0)
            cout << endl;
    }

    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
        if ((i + 1) % j == 0)
            cout << endl;
    }
}