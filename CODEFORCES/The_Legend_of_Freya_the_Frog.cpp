#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int min_x = (x + k - 1) / k;
        int min_y = (y + k - 1) / k;
        int dif = abs(min_x - min_y);
        // cout << min_x << " " << min_y << endl;
        // int res = 2 * max(min_x, min_y);
        if (min_x > min_y)
            dif--;
        cout << min_x + min_y + dif << endl;
    }

    return 0;
}
