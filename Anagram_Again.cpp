#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        int n;
        cin >> n;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            int m = temp.size();
            multiset<char> mst;
            for (int j = 0; j < m; j++)
            {
                mst.insert(temp[j]);
            }
            temp = "";
            for (auto k : mst)
            {
                temp += k;
            }
            // cout << temp << "\n";
            mp[temp]++;
            // cout << temp << " ";
        }
        // for (auto i : mp)
        // {
        //     cout << i.first << " ";
        // }
        // return 0;
        int q;
        cin >> q;
        while (q--)
        {
            string temp;
            cin >> temp;
            int m = temp.size();
            multiset<char> mst;
            for (int j = 0; j < m; j++)
            {
                mst.insert(temp[j]);
            }
            temp = "";
            for (auto k : mst)
            {
                temp += k;
            }
            int cnt = 0;
            cout<<"\n"<< temp<<"-> ";
            for (auto check : mp)
            {
                cout << check.first << " ";
                if (check.first.find(temp) != string::npos)
                {
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
