#include <bits/stdc++.h>
using namespace std;
#define int long long
int bin_exp(int a, int b, int n)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % n;
        a = a * a % n;
        b = b >> 1;
    }
    return res;
}

signed main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int x = bin_exp(b, n - 2, n);
    cout << (a * x) % n;
}