#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve();

int main()
{
    flash;
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)

    {
        // cout << i << " = ";
        solve();
    }

    return 0;
}

void solve()
{
    int n, k, pos = INT_MAX, evn = 0;
    cin >> n >> k;
    bool ok = false;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            evn++;
        }
        if (v[i] % k == 0)
        {
            ok = true;
        }
        else
            pos = min(pos, k - v[i] % k);
    }

    if (ok)
        cout << 0 << endl;
    else
    {
        if (k == 4)
        {
            if (evn >= 2)
            {
                cout << 0 << endl;
            }
            else
                cout << min(pos, 2 - evn) << endl;
        }
        else
            cout << pos << endl;
    }
    v.clear();
}