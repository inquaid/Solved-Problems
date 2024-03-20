#include <bits/stdc++.h>
using namespace std;

void solve();

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    int n, i, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (i = n - 1; i > 0; i--)
        if (v[i] > v[i - 1])
            break;

    i++;

    n = i;
    for (i = 1; i < n; i++)
        if (v[i - 1] > v[i])
            cnt = i;

    cout << cnt << endl;
}