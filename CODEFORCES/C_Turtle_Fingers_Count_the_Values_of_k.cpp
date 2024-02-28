#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve();

int pow(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int a, b, l, x = 0, y;
    cin >> a >> b >> l;

    set<int> result;

    while (true)
    {
        int pA = pow(a, x);
        if (pA > l)
            break;
        y = 0;
        while (true)
        {
            int value = pA * pow(b, y);
            if (value > l)
                break;

            if (l % value == 0)
            {
                result.insert(l / value);
            }
            y++;
        }
        x++;
    }

    cout << result.size() << endl;
}