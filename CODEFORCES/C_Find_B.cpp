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
    int n, queries;
    cin >> n >> queries;
    vector<int> v(n), prefixSum(n), onesCount(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        prefixSum[i] = v[i] + (i == 0 ? 0 : prefixSum[i - 1]);
        onesCount[i] = (v[i] == 1) + (i == 0 ? 0 : onesCount[i - 1]);
    }

    while (queries--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sumInRange = prefixSum[r] - (l > 0 ? prefixSum[l - 1] : 0);
        int onesInRange = onesCount[r] - (l > 0 ? onesCount[l - 1] : 0);
        int rangeLength = r - l + 1;

        if (r == l)
        {
            cout << "NO\n";
        }
        else if (sumInRange > onesInRange + (rangeLength - 1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
