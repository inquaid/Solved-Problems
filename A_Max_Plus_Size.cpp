#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt1 = 0, cnt2 = 0;
        int mx1 = 0, mx2 = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (i & 1)
            {
                cnt1++;
                mx1 = max(mx1, temp);
            }
            else
            {
                cnt2++;
                mx2 = max(mx2, temp);
            }
        }
        cout << max(cnt1 + mx1, cnt2 + mx2) << endl;
    }
}