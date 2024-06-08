#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, i, res = 0;
        cin >> a >> b;

        int p = floor(log2(b));
        for (i = p; i >= 0; i--)
        {
            if (((a >> i) & 1) != ((b >> i) & 1))
            {
                break;
            }
            if ((a >> i) & 1)
                res += ((1LL << i));
        }
        cout << res << endl;
    }
}