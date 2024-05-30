#include <bits/stdc++.h>
using namespace std;
#define int long long
int sum(int n)
{
    n;
    return (n * (n + 1)) / 2;
}
signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int cnt_sum = floor(n / x), cnt_min = floor(n / y);
        int mn = floor(n / lcm(x, y));
        cnt_min -= mn;
        cnt_sum -= mn;
        int res = 0;
        res += sum(n);

        res -= sum(n - cnt_sum);
        res -= sum(cnt_min);

        cout << res << endl;
    }
}
