#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int trgt;
        cin >> trgt;
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        bool flag = true;
        for (int i = 0; i < (1 << n); i++)
        {
            int sum = 0;
            if (flag == false)
            {
                break;
            }
            for (int j = 0; j < n; j++)
            {
                if (((i >> j) & 1) == 1)
                {
                    sum += v[j];
                }
            }
            if (sum == trgt)
            {
                cout << "YES\n";
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "NO\n";
        }
    }
}