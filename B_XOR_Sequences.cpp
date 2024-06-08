#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int res = 0, cnt = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (((x >> i) & 1) != 0 && ((y >> i) & 1) != 0)
            {
                cnt = i-1;
                // res++;
                // cout << (1 << (i - 1)) << endl;
                i -= 2;
                for (int j = i; j >= 0; j--)
                {
                    if (((x >> j) & 1) && ((y >> j) & 1))
                    {
                        continue;
                    }
                    else if (((x >> j) & 1) || ((y >> j) & 1))
                    {
                        res += (1 << j);
                    }
                    // cout<<j<<" ";
                    // int p = (!((x >> j) & 1)) | !((y >> j) & 1);
                    // res += (1 << p);
                    // if ((y >> j) & 1)
                    //     cout << 1;
                    // else
                    //     cout << 0;
                }
                // cout << endl
                //      << endl;

                break;
            }
            // else
            // {
            //     res = max(res, cnt);
            //     cnt = 0;
            // }
        }
        // cout << endl;

        // cout << res << " ";
        cout << (1 << cnt) - res << endl;
    }
}