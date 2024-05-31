#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    vector<int> prex_sum, sorted_prex_sum;
    prex_sum.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        prex_sum.push_back(prex_sum[i - 1] + v[i]);
    }
    sort(v.begin(), v.end());
    sorted_prex_sum.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        sorted_prex_sum.push_back(sorted_prex_sum[i - 1] + v[i]);
    }
    int t, l, r, c;
    cin >> t;
    while (t--)
    {
        cin >> c >> l >> r;
        if (c == 1)
        {
            cout << prex_sum[r - 1] - (l == 1 ? 0 : prex_sum[l - 2]) << endl;
        }
        else
        {
            cout << sorted_prex_sum[r - 1] - (l == 1 ? 0 : sorted_prex_sum[l - 2]) << endl;
        }
    }
}