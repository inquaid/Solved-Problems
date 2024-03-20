#include <bits/stdc++.h>
using namespace std;
#define int long long
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
    }
}
void solve()
{
    int n, sum = 0, temp;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }

    cout << abs(sum) << endl;
}
