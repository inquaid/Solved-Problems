#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
    }
    int res=0;
    for (auto i : mp)
    {
        res = max(res, i.second);
    }
    cout << res;
}