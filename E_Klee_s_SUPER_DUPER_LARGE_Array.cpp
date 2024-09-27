#include <bits/stdc++.h>
using namespace std;
#define int long long

// bool check(int mid, int a, int b)
// {
//     int sum_mid = (mid * (mid + 1)) / 2;
//     int left = sum_mid - a;
//     int right = b - sum_mid;
// }

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> r >> l;
        int a = l, b = r;
        r += l - 1;
        a = (l * (l - 1)) / 2;
        b = (r * (r + 1)) / 2;
        int res = LONG_LONG_MAX;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            int sum_mid = (mid * (mid + 1)) / 2;
            int left = sum_mid - a;
            int right = b - sum_mid;
            res = min(res, abs(left - right));

            if (left < right)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << res << endl;
    }
}