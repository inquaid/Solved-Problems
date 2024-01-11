#include <bits/stdc++.h>
using namespace std;

void print(map<int, int> mp, map<int, int> mp2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (mp[i] != mp2[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    long t, i, temp, n;
    cin >> t;
    map<int, int> mp, mp2;
    vector<int> v;
    while (t--)
    {
        v.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
            if (temp % 2 == 0)
            {
                mp[i] = 1;
            }
            else
                mp[i] = 0;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {

            if (v[i] % 2 == 0)
            {
                mp2[i] = 1;
            }
            else
                mp2[i] = 0;
        }
        print(mp, mp2, n);
    }
}