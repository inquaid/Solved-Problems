
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // cout<<lcm(7,7);
    // return 0;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a = 1, b = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = n / i;
                break;
            }
        }

        cout << a << " " << n - a << endl;
    }
}