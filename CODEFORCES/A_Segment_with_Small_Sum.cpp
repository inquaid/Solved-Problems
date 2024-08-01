#include <bits/stdc++.h>
using namespace std;
#define int long long
using vii = vector<int>;

auto scan = [](auto &v)
{for (auto &i : v) cin >> i; };

signed main()
{
    int n, s;
    cin >> n >> s;
    vii a(n);
    scan(a);
    vii prex;
    prex.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        prex.push_back(a[i] + prex[i - 1]);
    }

    int res = 0, l = 0, r = 0, sum = 0;
    while (r < n)
    {
        sum = prex[r] - (l == 0 ? 0 : prex[l-1]);
        if (sum <= s)
        {
            res = max(res, r - l + 1);
            r++;
        }
        else
        {
            l++;
        }
    }
    cout << res;
}
