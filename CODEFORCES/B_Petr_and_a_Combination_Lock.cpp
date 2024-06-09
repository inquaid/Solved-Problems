#include <bits/stdc++.h>
using namespace std;
#define int long long
int check_kth_bit(int x, int k)
{
    return ((x >> k) & 1);
}
signed main()
{
    int n, temp, res = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    for (int i = 0; i < (1 << n); i++)
    {
        res = 0;
        for (int j = 0; j < n; j++)
        {
            if (check_kth_bit(i, j) == 1)
            {
                res += v[j];
            }
            else
                res -= v[j];
        }
        if (res % 360 == 0)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}