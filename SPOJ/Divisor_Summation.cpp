#include <bits/stdc++.h>
using namespace std;
// #define int long long
const int m = 500005;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> mp;
    for (int i = 1; i < m; i++)
    {
        int sum = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
                if (j * j != i)
                {
                    sum += i / j;
                }
            }
        }
        mp[i] = sum - i;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << mp[n] << endl;
    }
    return 0;
}