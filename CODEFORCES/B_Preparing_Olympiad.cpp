#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r, x, cnt = 0;
    cin >> n >> l >> r >> x;
    vector<int> v(n), prex_sum;
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < (1 << n); i++)
    {
        int mn = INT_MAX, mx = 0, sum = 0, element = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                sum += v[j];
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);
                element++;
                // cout << v[j] << " ";
            }
        }
        if (element > 1 && (mx - mn) >= x && sum >= l && sum <= r)
            cnt++;

        // cout << endl;
    }
    cout << cnt;
}