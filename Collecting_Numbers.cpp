#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    int index = 0;
    mp[0] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        bool flag = true;
        for (int j = 0; j < index; j++)
            if (v[i] >= mp[j])
            {
                mp[j] = v[i];
                flag = false;
                break;
            }

        if (flag)
        {
            index++;
            mp[index] = v[i];
        }
    }
    cout << mp.size() - 1;
}