#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

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

    int n;
    cin >> n;
    int minn = -13, maxx = INT_MAX;
    vector<int> c;

    for (int a, x, i = 0; i < n; i++)
    {
        cin >> a >> x;
        if (a == 1)
            minn = max(minn, x);

        else if (a == 2)
            maxx = min(maxx, x);
        else
            c.push_back(x);
    }

    int re = maxx - minn + 1;
    for (int i : c)
    {
        if (i >= minn && i <= maxx)
            re--;
    }
    if (re > 0)
    {
        cout << (re) << endl;
    }
    else
        cout << 0 << endl;
}
