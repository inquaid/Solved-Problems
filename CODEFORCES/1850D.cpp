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
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, k, cnt = 1, ans = INT_MAX;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if ((v[i + 1] - v[i]) > k)
        {
            ans = min(ans, n - cnt);

            cnt = 1;
        }
        else
            cnt++;
    }
    ans = min(ans, n - cnt);
    cout << ans << endl;
}