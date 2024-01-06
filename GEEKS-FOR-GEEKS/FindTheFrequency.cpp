#include <bits/stdc++.h>
using namespace std;

int findFrequency(vector<int> &v, int x)
{
    int temp;
    map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        temp = v[i];
        if (mp.find(temp) == mp.end())
        {
            mp[temp] = 0;
        }
        mp[temp]++;
    }
    return mp[x];
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int N;
        cin >> N;
        vector<int> v;
        for (int i = 0; i < N; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        int x;
        cin >> x;
        cout << findFrequency(v, x) << endl;
    }
    return 0;
}
