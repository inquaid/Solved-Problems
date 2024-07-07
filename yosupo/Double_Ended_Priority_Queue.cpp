#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    multiset<int> mst;
    while (n--)
    {
        int x;
        cin >> x;
        mst.insert(x);
    }
    while (q--)
    {
        int s, x;
        cin >> s;
        switch (s)
        {
        case 0:
            cin >> x;
            mst.insert(x);

            break;
        case 1:
        {
            auto it = mst.begin();
            cout << *it << "\n";
            mst.erase(it);
            break;
        }
        default:
        {
            auto it = prev(mst.end());
            cout << *it << "\n";
            mst.erase(it);

            break;
        }
        }
    }
}
