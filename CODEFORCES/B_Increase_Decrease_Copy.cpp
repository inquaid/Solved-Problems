#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n + 1);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        int res = 0, mx = 0, mn = INT_MAX, add = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            res += abs(a[i] - b[i]);
            mx = max(a[i], b[i]);
            mn = min(a[i], b[i]);
            if (mx >= b[n] && mn <= b[n])
            {
                add = 0;
            }
            else
            {
                add = min({add, abs(mx - b[n]), abs(mn - b[n])});
            }
        }

        cout << res + 1 + add << endl;
    }
}