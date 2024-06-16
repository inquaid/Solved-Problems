#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        bool flag = 0;
        if (v[0] != v[1])
        {
            cout << "YES\n";
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if ((v[i] % v[0]) != 0)
                {
                    cout << "YES\n";
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO\n";
            }
        }
    }
}