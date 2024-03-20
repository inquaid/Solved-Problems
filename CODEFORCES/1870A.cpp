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
    int n, k, x, cnt = 0, sum = 0, plus;
    cin >> n >> k >> x;
    if (n < k || k > (x + 1))
    {
        cout << -1;
        return;
    }
    bool ok = true;
    int j = 0, i;
    for (i = 0; i < n; i++)
    {

        if (i == k)
        {
            break;
        }

        // cout << j << " ";
        sum += j;

        if (j < x)
        {
            j++;
        }
        // cnt++;
    }
    j = x;
    if (x == k)
        j--;
    for (; i < n; i++)
    {
        // cout << j << " ";
        sum += j;
        j;
    }

    cout << sum;
}