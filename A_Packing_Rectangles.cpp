#include <bits/stdc++.h>
using namespace std;
#define int long long

int w, h, n;
bool isitfit(int r)
{
    int a = floor(r / (w * 1.0)), b = floor(r / (h * 1.0));
    return (a * b) >= n;
}
int solve(int r)
{
    int l = 1;
    int ans = r;
    int mid, x;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        // cout << mid << endl;
        if (isitfit(mid) == false)
            l = mid + 1;
        else
        {
            r = mid - 1;
            // x = mid;
            ans = min(ans, mid);
        }
    }
    return ans;
}
signed main()
{

    cin >> w >> h >> n;
    int r = 1;
    while (isitfit(r) == false)
    {
        r = r * 2;
    }
    //    // cout<<r<<endl;

    int ans = solve(r);
    cout << ans;
}