#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
int n, t;
vector<int> v;

bool possible(int k)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (k / v[i]);
    }
    return ans >= t;
}

signed main()
{
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.pb(temp);
    }
    int l = 0, r = 1;
    while (possible(r) == false)
    {
        r *= 2;
    }
    int ans = LONG_LONG_MAX;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (possible(mid))
        {
            r = mid - 1;
            ans = min(ans, mid);
        }
        else
            l = mid + 1;
    }
    cout << ans;
}