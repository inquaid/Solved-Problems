#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, string> mp;
    string a, b;

    while (getline(cin, a) && a != "" && a != "\n")
    {
        stringstream ss(a);
        ss >> b >> a;
        mp[a] = b;
    }

    while (cin >> a)
    {
        if (mp.find(a) != mp.end())
            cout << mp[a] << endl;
        else
            cout << "eh" << endl;
    }

    return 0;
}
