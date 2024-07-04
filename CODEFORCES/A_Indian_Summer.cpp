#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cnt = 0;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    for (int i = 0; i < t; i++)
    {
        string temp;
        getline(cin, temp);
        mp[temp]++;
        if (mp[temp] == 1)
            cnt++;
    }
    cout << cnt;
}