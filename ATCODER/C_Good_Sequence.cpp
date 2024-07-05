#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
    }
    int res = 0;
    for (auto i : mp)
    {
        if (i.first != i.second)
        {
            if (i.second > i.first)
                res += i.second - i.first;
            else
                res += i.second;
        }
    }
    cout << res;
}