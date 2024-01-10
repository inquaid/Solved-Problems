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
        int a, b, c;
        cin >> a >> b >> c;
        if (a % c != 0)
        {
            a -= (a % c);
            for (int i = a + c; i <= b; i += c)
            {
                // if (i % c == 0)
                {
                    cout << i << endl;
                }
            }
        }
        else
        {
            for (int i = a; i <= b; i += c)
            {
                // if (i % c == 0)
                {
                    cout << i << endl;
                }
            }
        }
        cout << endl;
    }
}