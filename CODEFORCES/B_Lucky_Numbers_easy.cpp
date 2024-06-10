#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int p = ceil(log10(n)), q = floor(log2(n));

    if (p < 1)
    {
        p = 1;
    }
    int res = LONG_LONG_MAX;
    for (int k = p; k <= 18; k++)
    {

        for (int i = 0; i < (1 << p); i++)
        {
            int num = 0, one = 0, zero = 0;
            for (int j = 0; j < k; j++)
            {
                if ((i >> j) & 1)
                {
                    one++;
                    num = num * 10 + 4;
                }
                else
                {
                    zero++;
                    num = num * 10 + 7;
                }
            }
            if (num >= n && one == zero)
            {
                res = min(res, num);
            }
            // cout << num << " ";
        }
    }
    cout << res;
}