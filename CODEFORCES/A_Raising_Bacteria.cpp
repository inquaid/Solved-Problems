#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (((n >> i) & 1) == 1)
            res++;
    }
    cout << res;
}