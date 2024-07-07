#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<pair<int, int>, string> mp;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> a >> b >> s;
        mp[make_pair(a, b)] = s;
    }
    int q;
    cin >> q;
    while (q--)
    {
        cin >> a >> b;
        cout << mp[make_pair(a, b)] << endl;
    }
}