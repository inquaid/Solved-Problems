#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 31; j >= 0; j--)
        {
            if ((i >> j) & 1 != 0)
                cnt++;
        }
        v.push_back(cnt);
        v.push_back(__builtin_popcount(i));

        // cout << i << " --> " << cnt << endl;
    }
}