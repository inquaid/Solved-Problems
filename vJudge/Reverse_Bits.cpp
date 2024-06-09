#include <bits/stdc++.h>
using namespace std;
#define int long long

int check_kth_bit(int x, int k)
{
    return ((x >> k) & 1);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int temp, res = 0;
        cin >> temp;
        for (int i = 0; i < 32; i++)
        {
            if (check_kth_bit(temp, i))
            {
                res += (1LL << (31 - i));
            }
        }
        cout << res << "\n";
    }
}