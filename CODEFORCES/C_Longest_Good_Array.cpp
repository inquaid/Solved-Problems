#include <bits/stdc++.h>
using namespace std;
#define int long long
int sum(int n)
{
    return (n * (n + 1)) / 2;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, cnt = 0, i;
        cin >> a >> b;
        int dif = b - a;
        b -= a;

        int l = 0, r = 100000, ans = 0, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (sum(mid) <= b)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (dif != 0)
            r++;
        cout << ans + 1 << endl;
    }
}