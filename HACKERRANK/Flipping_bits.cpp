#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        // cout<<n<<endl;
        for (int i = 31; i >= 0; i--)
        {
            if (((n >> i) & 1) == 0)
            {
                res += abs(1LL << i);
                // cout<<i<<" ";
                // cout<<1;
            }
            // else cout<<0;
        }
        cout << res << endl;
        // cout<<endl;
    }
}