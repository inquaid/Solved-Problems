#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0, cnt = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        for (int i = 1; i < n; i++)
        {
            int temp = v[i];
            while (cnt > 0 and temp >= 2 * v[i - 1])
            {
                cnt--;
                temp /= 2;
            }
            while (temp < v[i - 1])
            {
                cnt++;
                temp *= 2;
            }
            res += cnt;
        }
        // for (auto i : v)
        // cout << i << " ";
        // cout << endl;
        cout << res << endl;
    }
}

// 3 6 12 24 48
