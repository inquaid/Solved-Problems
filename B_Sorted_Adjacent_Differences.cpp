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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            mp[temp]++;
        }
        // map<int, int> res;
        vector<int> neg, res;
        for (auto i : mp)
        {
            if (i.second > 1)
                while (i.second > 0)
                {
                    cout << i.first << " ";
                    i.second--;
                }
            else if (i.first > 0)
                res.push_back(i.first);
            else
                neg.push_back(i.first);
        }

        // reverse(res.begin(), res.end());
        reverse(neg.begin(), neg.end());

        for (auto i : res)
            cout << i << " ";
        for (auto i : neg)
            cout << i << " ";
        cout << endl;
    }
}