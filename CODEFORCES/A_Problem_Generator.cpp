#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char i = 'A'; i <= 'G'; i++)
        {
            mp[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int res = 0;
        for (auto i : mp)
        {
            if (i.second < m)
            {
                res += (m - i.second);
            }
            // cout << i.first << " " << i.second << endl;
        }
        cout << res << endl;
    }
}