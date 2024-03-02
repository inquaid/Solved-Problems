#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

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
}

void solve()
{
    string s[8];
    bool ok;
    for (int i = 0; i < 8; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < 8; i++)
    {
        ok = true;
        for (int j = 0; j < 8; j++)
        {
            if (s[i][j] != 'R')
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << 'R' << endl;
            return;
        }
    }

    cout << 'B' << endl;
}