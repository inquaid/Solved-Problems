#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
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
    int n, k, cnt = 0, current;
    bool ok = true;
    cin >> n >> k;
    vector<int> health(n), position(n);
    for (auto &i : health)
        cin >> i;
    for (auto &i : position)
        cin >> i;
    multiset<pair<int, int>> mst;
    for (int i = 0; i < n; i++)
    {
        mst.insert({abs(position[i]), health[i]});
    }
    while (!mst.empty())
    {
        current = k;
        while (!mst.empty() && current)
        {
            pair<int, int> pr = *mst.begin();
            if (pr.first - cnt <= 0)
            {
                ok = 0;
            }
            mst.erase(mst.begin());
            if (current >= pr.second)
            {
                current -= pr.second;
            }
            else
            {
                mst.insert({pr.first, pr.second - current});
                current = 0;
                break;
            }
        }
        cnt++;
    }
    if (ok)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
