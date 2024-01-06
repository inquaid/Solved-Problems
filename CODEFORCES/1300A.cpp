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
        int n;
        cin >> n;
        vector<int> ary(n);
        int sum = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
            if (ary[i] == 0)
            {
                cnt++;
                ary[i] = 1;
            }
            sum += ary[i];
        }

        if (sum == 0)
        {
            cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}
