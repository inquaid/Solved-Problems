#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d[2 * n + 2] = {};
        ll s = 0;
        auto idx = [&](int v)
        {
            if (v < 0)
                v += 2 * n + 2;
            return v;
        };
        for (int i = 1, a; i <= n; i++)
        {
            cin >> a;
            s += d[idx(a - i)]++;
        }
        cout << s << endl;
    }
}