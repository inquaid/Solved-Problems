#include <bits/stdc++.h>
using namespace std;
#define int long long
bool ifis(int sum, int x, int n, vector<int> &a)
{
    double avg = (sum + x) / (n * 1.0);
    double half = avg / 2.0;

    auto it = lower_bound(a.begin(), a.end(), half);

    return distance(a.begin(), it) > (n / 2);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0, mx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }
        if (n <= 2)
        {
            cout << -1 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        // sum -= mx;
        // int mid_index = a[n / 2];
        int left = 0, right = 1e12, res = -1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (ifis(sum, mid, n, a))
            {
                res = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        cout << res << endl;
    }
}