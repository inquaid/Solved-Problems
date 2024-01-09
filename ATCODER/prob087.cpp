#include <cmath>
#include <cstdio>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, temp, cnt = 0;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
    }
    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if ((*it).first > (*it).second)
        {
            // cout<<(*it).first<<" "<<(*it).second<<endl;
            cnt += (*it).second;
        }
        else if ((*it).first < (*it).second)
        {
            cnt += ((*it).second - (*it).first);
        }
    }
    cout << cnt;
    return 0;
}
