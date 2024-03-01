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
    int n, k, mx = INT_MIN, mn = INT_MAX, temp, first, last;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mx = max(mx, temp);
        mn = min(mn, temp);
        if (i == 0)
            first = temp;
    }
    last = temp;
    if (k == 1)
    {
        cout << mn;
    }
    else if (k == 2)
    {
        cout << max(first, last);
    }
    else
        cout << mx;
    cout << endl;
}