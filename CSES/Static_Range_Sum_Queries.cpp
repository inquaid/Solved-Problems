#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n), prex_sum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            prex_sum[i] = v[i];
        else
            prex_sum[i] = prex_sum[i - 1] + v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            cout << prex_sum[r] << endl;
        }
        else
        {
            cout << prex_sum[r] - prex_sum[l - 1] << endl;
        }
    }
}