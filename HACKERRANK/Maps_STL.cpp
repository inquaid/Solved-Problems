#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int type;
        cin >> type;
        int x;
        string s;
        switch (type)
        {
        case 1:
            cin >> s >> x;
            mp[s] += x;
            break;
        case 2:
            cin >> s;
            mp.erase(s);
            break;

        default:
            cin >> s;
            cout << mp[s] << endl;
            break;
        }
    }
}