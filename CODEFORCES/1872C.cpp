#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve();

int GCD(int a, int b)
{
    return (b == 0 ? a : GCD(b, a % b));
}
signed main()
{
    flash;

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
void solve()
{
    int l, r;
    cin >> l >> r;
    bool found = false;
    for (int i = l; i <= r && !found; i++)
    {
        for (int k = 2; k * k <= i; k++)
        {
            if (i % k == 0)
            {
                cout << k << " " << i - k << endl;
                found = true;
                break;
            }
        }
    }
    if (!found)
    {
        cout << -1 << endl;
    }
}
