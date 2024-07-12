#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, a = -1, b = -1;
    cin >> n >> k;

    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        int temp = k - v[i];
        if (temp < 0)
            continue;

        if (mp.find(temp) != mp.end())
        {
            a = i + 1;
            b = mp[temp];
        }
        mp[v[i]] = i + 1;
    }

    if (a == -1 or b == -1)
    {
        cout << "IMPOSSIBLE";
    }
    else
        cout << b << " " << a;
}