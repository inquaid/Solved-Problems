#include <bits/stdc++.h>
using namespace std;
#define int long long
const int m = 1e9 + 7;

int bin_expo(int a, int b)
{
    a %= m;
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }

    return res;
}

signed main()
{
    int n;
    cin >> n;
    cout << bin_expo(2,n);
}