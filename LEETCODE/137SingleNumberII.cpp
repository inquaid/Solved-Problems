#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> mp;
    int temp;
    while (cin >> temp)
    {
        if (mp.find(temp) == mp.end())
        {
            mp[temp] = 0;
        }
        mp[temp]++;
    }
    for (auto i : mp)
    {
        if (i.second == 1)
        {
            cout << i.first << endl;
            return 0;
        }
    }
}