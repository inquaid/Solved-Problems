#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int temp;
        vector<int> costs(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            costs[i] = temp;
        }
        sort(costs.begin(), costs.end(), greater<int>());
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i & 1) == 0)
            {
                res += costs[i];
            }
            else
            {
                temp = costs[i];
                if ((k + costs[i]) <= costs[i - 1])
                {
                    temp += k;
                }
                else
                {
                    temp = costs[i - 1];
                }
                k -= (temp - costs[i]);
                k = max(0LL, k);
                res -= temp;
            }
        }
        cout << res << endl;
    }

    return 0;
}