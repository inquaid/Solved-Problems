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
    int res = INT_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        int grp_1 = 0, grp_2 = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                grp_1 += v[j];
            }
            else
                grp_2 += v[j];
        }
        res = min(res, abs(grp_1 - grp_2));
    }
    cout << res;
}