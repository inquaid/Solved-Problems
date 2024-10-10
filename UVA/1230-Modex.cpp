#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        for (int i = 0; i < t; i++)
        {
            int x, y, n;
            cin >> x >> y >> n;
            cout << bin_exp(x, y, n) << endl;
        }
        cin >> t;
    }
}