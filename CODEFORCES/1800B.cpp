#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int T, a, b;
    string s;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> s;
        map<char, int> mp;
        for (char i = 'A'; i <= 'z'; i++)
            mp[i] = 0;
        for (char c : s)
            mp[c]++;
        int has = 0, remain = 0;
        for (char i = 'A'; i <= 'Z'; i++)
        {
            has += min(mp[i], mp[i + 32]);
            if (abs(mp[i] - mp[i + 32]) > 1)
                remain += floor((double)abs(mp[i] - mp[i + 32]) / 2);
        }
        cout << has + min(remain, b) << endl;
    }
}