#include <bits/stdc++.h>
using namespace std;
int check_kth_bit(int x, int k)
{
    return ((x >> k) & 1);
}

int main()
{
    int t, temp;
    cin >> t;
    while (t--)
    {
        int res = 0;
        cin >> temp;
        int k = floor(log2(temp));

        for (int i = 31; i > 0; i -= 2)
        {
            // cout<<i<<" "<<i-1<<" ";
            // res +=
            if (check_kth_bit(temp, i - 1))
            {
                res += (1 << i);
            }
            if (check_kth_bit(temp, i))
            {
                res += (1 << (i - 1));
            }
        }

        cout << res << endl;
    }
}