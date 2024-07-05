#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int main()
{

    int n, q, unread = 0, read_t = 0;
    cin >> n >> q;
    vector<pair<int, int>> check;
    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        int x;
        switch (type)
        {
        case 1:
            cin >> x;
            check.push_back(make_pair(1, x));
            // mp[x]++;
            // unread++;
            break;
        case 2:
            cin >> x;
            check.push_back(make_pair(2, x));
            // unread -= mp[x];
            // mp[x] = 0;
            // unread = max(unread, 0);
            break;
        case 3:
            int t;
            cin >> t;
            read_t = max(read_t, t);
            // for (int i = 0; i < t; i++)
            // {
            //     if (mp[check[i]] > 0)
            //     {
            //         unread--;
            //         mp[check[i]]--;
            //     }
            // }

            break;

        default:
            break;
        }
    }

    for (int i = read_t + 1; i < q; i++)
    {
        int x;
        switch (check[i].first)
        {
        case 1:
            // cin >> x;
            x = check[i].second;
            // check.push_back(make_pair(1, x));
            mp[x]++;
            unread++;
            break;
        case 2:
            // cin >> x;
            x = check[i].second;

            // check.push_back(make_pair(2, x));
            unread -= mp[x];
            mp[x] = 0;
            unread = max(unread, 0);
            break;
        }
        cout << unread << endl;
    }
}