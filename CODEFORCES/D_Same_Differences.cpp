#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            temp -= i;
            // cout<<temp<<" ";
            mp[temp]++;
            if (mp[temp] > 1)
                cnt += mp[temp] - 1;
        }

        cout << cnt << endl;
    }
}