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
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int res = 0, check, cnt;
        // sort(v.begin(),v.end());
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    mp[v[i] + v[j]]++;
                    // cout<<v[i]+v[j]<<" ";
                }
            }
        }
        int mx = 0;
        for (auto i : mp)
        {
            mx = max(mx, i.second);
        }
        cout << mx << endl;
    }
}