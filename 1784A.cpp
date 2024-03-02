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
    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    sort(v.begin(), v.end());
    if (v[0] > 1)
    {
        ans = v[0] - 1;
        v[0] = 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > 1)
        {
            int temp = v[i + 1];

            v[i + 1] = v[i] + 1;
            ans += temp - v[i + 1];
        }
    }
    cout << ans << endl;
}
