#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // preCompute();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int n = __gcd(a, b);
        // cout << countDivisors[n] << endl;
        int res = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                res++;
                if (n / i != i)
                    res++;
            }
        }
        cout << res << endl;
    }
}