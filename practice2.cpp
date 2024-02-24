#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
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
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int mn = 0, mx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            mn = i + 1;
            break;
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] != v[i - 1])
        {
            mx = i;
            break;
        }
    }
    if (v[0] == v[n - 1])
        cout << abs(mn - mx) << endl;

    else
    {
        cout << max(abs(n - mx), abs(n - mn)) << endl;
    }
}