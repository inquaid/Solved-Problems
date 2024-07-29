#include <bits/stdc++.h>
using namespace std;
#define int long long
int w, h, n;

bool is_possible(double k)
{
    int ans = floor(k / (w * 1.0)) * floor(k / (h * 1.0));
    return ans >= n;
}

signed main()
{
    cin >> w >> h >> n;

    int l = 0, r = 1;
    while (is_possible(r) == false)
    {
        r *= 2;
    }

    int ans = r;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (is_possible(mid))
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans;
}