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
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
    {
        cout << "STAIR";
    }
    else if (a < b && b > c)
    {
        cout << "PEAK";
    }
    else
        cout << "NONE";
}