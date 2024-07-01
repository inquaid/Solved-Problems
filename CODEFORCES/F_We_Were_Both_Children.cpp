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
        int n, temp;
        cin >> n;
        map<int, int> mp, a;
        vector<int> aa;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp <= n)
            {
                a[temp]++;
                if (a[temp] == 1)
                {
                    aa.push_back(temp);
                }
            }
        }

        int res = 0, m = a.size();

        for (int i = 0; i < m; i++)
        {
            for (int j = aa[i]; j <= n; j += aa[i])
            {
                mp[j] += a[aa[i]];
            }
        }
        for (auto i : mp)
        {
            res = max(res, i.second);
        }

        cout << res << endl;
    }
}