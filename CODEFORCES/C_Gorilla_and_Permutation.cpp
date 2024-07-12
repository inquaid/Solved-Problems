#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int t, n, k, m, nums, tobe_removed, staying, i;
void solve();
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    cin >> n >> k >> m;

    nums = n;
    tobe_removed = (n < (k + m)) ? (k + m) - n : 0;
    staying = n - m - k;
    m -= tobe_removed;
    vector<int> res;
    for (i = 0; i < m; i++)
        res.push_back(nums--);
    for (i = 0; i < staying; i++)
        res.push_back(nums--);
    for (i = 0; i < nums; i++)
        res.push_back(i + 1);

    for (auto i : res)
        cout << i << " ";

    cout << endl;
}