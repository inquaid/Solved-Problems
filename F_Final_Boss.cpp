#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, n, temp = 0;
        cin >> h >> n;
        map<int, int> mp;
        vector<int> v(n),a(n);
        
        for (auto &i : v)
        {
            cin >> i;
            temp += i;
        }
        h -= temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            // mp[v[i]] = temp;
            a[]
        }
        for (auto i : mp)
        {
            cout << i.first << " " << i.second << endl;
        }
        // int sum = 1;
        // int i = 0;
        // while (true)
        // {
        //     h -= v[i % n];


        //     if (h < 1)
        //         break;
        //     i++;
        // }

        // cout << sum;
        cout << endl;
    }
}