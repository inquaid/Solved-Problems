#include <bits/stdc++.h>
using namespace std;
#define int long long
const int m = 1e9 + 7;
int bin_exp(int a, int b, int m)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b = b >> 1;
    }
    return res % m;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int temp;
        if (b == 0 and c == 0)
        {
            temp = 1;
        }
        else
            temp = bin_exp(b, c, m-1);
        if (temp == 0 and a == 0)
        {
            cout << 1 << endl;
        }
        else
            cout << bin_exp(a, temp, m) << endl;
    }
}