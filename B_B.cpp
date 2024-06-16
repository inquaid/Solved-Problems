#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    cin.ignore();
    map<string, int> mp;
    string temp;
    bool is = false;
    while (n--)
    {
        getline(cin, temp);
        mp[temp]++;
        if (mp[temp] > 1)
            is = true;
    }
    if (is)
        cout << "Yes";
    else
        cout << "No";
}