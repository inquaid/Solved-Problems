#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] == 1)
            cout << "OK\n";
        else
            cout << s << mp[s] - 1 << '\n';
    }
}