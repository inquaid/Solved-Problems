#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, my = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        my = gcd(my, temp);
    }

    int res = 0;
    for (int i = 1; i * 1LL * i <= my; i++)
    {
        if (my % i == 0)
        {
            res++;
            if (i != (my / i))
                res++;
        }
    }
    cout << res << " ";
}