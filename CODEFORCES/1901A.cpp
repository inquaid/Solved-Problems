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
        int n, x;
        cin >> n >> x;
        int ary[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
        }
        int max_dif = abs(ary[0] - 0);
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(ary[i] - ary[i + 1]) > max_dif)
            {
                max_dif = abs(ary[i] - ary[i + 1]);
            }
        }
        if (2 * (abs(ary[n - 1] - x)) > max_dif)
        {
            max_dif = 2 * abs(ary[n - 1] - x);
        }

        cout << max_dif << endl;
    }
}