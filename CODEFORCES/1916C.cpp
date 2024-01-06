#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    flash;
    int t;
    cin >> t;
    while (t--)
    {
        long long n, r;
        cin >> n;
        long long ttl = 0ll, od = 0, evn = 0;
        for (long long i = 0; i < n; ++i)
        {
            long long a;
            cin >> a;
            ttl += a;
            if (a & 1)
                od++;
            else
                evn++;
            r = od / 3;
            if (evn == 0 && od == 1)
            {
                r = 0;
            }
            else if (od % 3 == 1)
            {
                r = (od + 2) / 3;
            }
            cout << ttl - r << " ";
        }
        cout << endl;
    }
    return 0;
}