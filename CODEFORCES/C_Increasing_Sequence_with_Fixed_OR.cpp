#include <bits/stdc++.h>
using namespace std;
#define int long long

// Checks if kth bit of x is set (1) or not (0)
int check_kth_bit(int x, int k)
{
    return (x >> k) & 1;
}

// Returns the count of set (1) bits in binary representation of x
int count_on_bits(int x)
{
    int ans = 0;
    for (int k = 0; k < 64; k++)
    {
        if (check_kth_bit(x, k))
        {
            ans++;
        }
    }
    return ans;
}

// Sets the kth bit of x to 1 and returns the result
int set_kth_bit(int x, int k)
{
    return x | (1 << k);
}

// Sets the kth bit of x to 0 and returns the result
int unset_kth_bit(int x, int k)
{
    return x & (~(1LL << k));
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int total = count_on_bits(n);
        if (total == 1)
        {
            cout << 1 << endl
                 << n << endl;
            continue;
        }
        cout << total + 1 << endl;
        vector<int> v;

        for (int i = 63; i >= 0; i--)
        {
            int temp = n;
            if (check_kth_bit(temp, i))
            {
                temp = unset_kth_bit(temp, i);
                cout << temp << " ";
            }
        }
        cout << n;

        cout << endl;
    }

    return 0;
}