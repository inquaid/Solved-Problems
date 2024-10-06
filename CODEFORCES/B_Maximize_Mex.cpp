#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            mp[temp]++;
        }

        int cnt = 0;
        while (mp[cnt]) 
        {
            mp[cnt + x] += mp[cnt] - 1;
            mp[cnt] = 0;
            cnt++;
        }
        
        cout << cnt << endl;
    }
}