#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, temp;
    cin >> T;
    while (T--)
    {
        cin >> n;
        bool ok = true;
        int cnt = 0;
        vector<int> v, vv;
        // n++;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> temp;
            if (temp == v[0])
                cnt++;
            if (temp != v[0] && ok)
            {
                vv.push_back(temp);
                for (int j = 0; j < n - 2; j++)
                {
                    cin >> temp;
                    vv.push_back(temp);
                }
                ok = false;
            }
            else
            {
                for (int j = 0; j < n - 2; j++)
                {
                    cin >> temp;
                }
            }
        }

        if (cnt > 0)
        {
            cout << v[0] << " ";
            for (auto i : vv)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            cout << vv[0] << " ";
            for (auto i : v)
                cout << i << " ";
            cout << endl;
        }
    }
}