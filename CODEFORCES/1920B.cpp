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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> ary(n);
    for (int &x : ary)
    {
        cin >> x;
    }
    sort(ary.begin(), ary.end());
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ary[i];
        v[i] = sum;
    }
    int re;
    int smm = n - 1;
    int ms = smm - x + 1;
    if (ms <= 0)
    {
        re = -1 * v[smm];
    }
    else
    {
        re = 2 * v[ms - 1] - v[smm];
    }
    for (int i = max(n - k, 0LL); i < n; i++)
    {
        // cout<<i<<endl;
        if (i == 0)
        {
            re = max(re, 0LL);
            continue;
        }
        smm = i - 1;
        ms = smm - x + 1;
        // cout<<smm<<" "<<ms<<endl;
        if (ms <= 0)
        {
            re = max(re, -1 * v[smm]);
        }
        else
        {
            re = max(re, 2 * v[ms - 1] - v[smm]);
        }
    }
    cout << re << endl;
}