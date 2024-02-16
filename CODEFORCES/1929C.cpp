#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

signed main()
{
    flash;
    long long T;
    cin >> T;
    while (T--)
    {
        long long k, x, a, i = 0;
        cin >> k >> x >> a;
        long long something = 0;
        long long will_ = 1;
        while (will_ && i < x)
        {
            long long temp = (something + k - 1) / (k - 1);
            if (temp == 0)
            {
                temp = 1;
            }
            something += temp;

            if (something <= a)
            {
                will_ = true;
            }
            else
                will_ = false;

            i++;
        }
        cout << ((k * (a - something) > a) ? "YES" : "NO");
        cout << endl;
    }

    return 0;
}