#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, res = 0, empty_space;
        cin >> x >> y;
        res = ceil(y / 2.0);
        empty_space = (y & 1) ? ((res - 1) * 7) + 11 : (res * 7);

        if (x > empty_space)
        {
            res += ceil((x - empty_space) / 15.0);
        }
        cout << res << endl;
    }
}