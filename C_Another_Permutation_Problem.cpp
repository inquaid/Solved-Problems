#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        vector<int> v[1 << n];
        for (int i = 0; i < (1 << n); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i >> j) & 1)
                    v[i].push_back(j + 1);
                // cout << (j + 1) << " ";
            }
            // cout << endl;
        }
        // for (auto i : v)
        // {
        //     for (auto j : i)
        //     {
        //         cout << j << " ";
        //     }
        //     cout << endl;
        // }
    }
    return 0;
}