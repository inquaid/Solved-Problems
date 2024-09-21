#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(int x, int a)
{
    return floor(x / (a * 1.0)) + (x % a);
}

signed main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l, r, a;
        cin >> l >> r >> a;
        int res = solve(l, a);

        while ((r - l) >= 0)
        {
            int x = l + (r - l) / 2;
            int temp = solve(x, a);
            if (temp >= res)
            {
                l = x + 1;
            res = max(res, temp);
            }
            else
            {
                r = x - 1;
            }
        }
        cout << res << endl;
    }
}