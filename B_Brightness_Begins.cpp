#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int res = 1;
        for (int i = 1; i <= n; i++)
        {
            res = gcd(res, i);
        }
        cout << res << endl;
    }
}