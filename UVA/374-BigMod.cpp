#include <bits/stdc++.h>
using namespace std;
#define int long long

int bin_exp(int x, int y, int n)
{
    int res = 1;
    while (y)
    {
        if (y & 1)
            res = res * x % n;
        x = x * x % n;
        y = y >> 1;
    }
    return res;
}

signed main()
{
    int a, b, c;
    while (scanf("%lld%lld%lld", &a, &b, &c) != EOF)
    {
        cout << bin_exp(a, b, c) << endl;
    }
}