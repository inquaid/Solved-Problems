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
        int n, k;
        cin >> n >> k;
        int ary[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
        }

        sort(ary, ary + n);
        int cnt = 1, i, maxx = 1;
        for (i = 0; i < n - 1; i++)
        {
            if ((ary[i + 1] - ary[i]) <= k)
            {
                cnt++;
                maxx = max(maxx, cnt);
            }
            else
            {
                cnt = 1;
            }
        }
        cout << n - maxx << endl;
    }
}