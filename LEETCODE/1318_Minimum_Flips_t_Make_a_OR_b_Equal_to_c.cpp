#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, res = 0;
    cin >> a >> b >> c;
    // cout << ((a >> 3) & 1);
    // cout<<(a|b);
    // int p = floor(log2(max({a, b, c})));
    for (int i = 31; i >= 0; i--)
    {
        int _a = ((a >> i) & 1), _b = ((b >> i) & 1), _c = ((c >> i) & 1);

        if ((_a | _b) != _c)
        {
            if (_a == 1 && _b == 1)
            {
                res += 2;
            }
            else
                res++;
        }
    }
    cout << res;
}