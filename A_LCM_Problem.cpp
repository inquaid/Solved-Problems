#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve();
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    int l, r;
    cin >> l >> r;
    if (2 * l > r)
        cout << "-1 -1\n";
    else
    {
        cout << l << " " << 2 * l << endl;
    }
}