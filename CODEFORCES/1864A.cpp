#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> ary(n);
        for (int i = 0; i < n; i++)
        {
            y -= i;
            ary[i] = y;
        }
        sort(ary.begin(), ary.end());
        if (ary[0] < x)
        {
            cout << -1 << endl;
        }
        else
        {
            if (ary[0] > x)
            {
                ary[0] = x;
            }
            for (int i = 0; i < n; i++)
            {
                cout << ary[i] << " ";
            }

            cout << endl;
        }
    }
}