#include <bits/stdc++.h>
#define int unsigned long long

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
signed main()
{
    flash;
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, i;
        cin >> a >> b >> c;
        if (a > b)
        {
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
        }
        for (i = b; i < c; i += b)
        {
            if (i % a == 0)
                cout << i << endl;
        }

        cout << endl;
    }
}