#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    int n, q;
    cin >> n >> q;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        dq.push_back(temp);
    }
    vector<int> v(q);
    int mx = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> v[i];
        mx = max(v[i], mx);
    }
    vector<pair<int, int>> res;
    for (int i = 0; i < mx; i++)
    {
        int a, b;
        a = dq.front();
        dq.pop_front();
        b = dq.front();
        dq.pop_front();
        res.push_back(make_pair(a, b));
        if (a > b)
        {
            dq.push_front(a);
            dq.push_back(b);
        }
        else
        {
            dq.push_front(b);
            dq.push_back(a);
        }
    }
    dq.clear();
    for (int i = 0; i < q; i++)
    {
        cout << res[v[i] - 1].first << " " << res[v[i] - 1].second << endl;
    }
    v.clear();
    res.clear();
    vector<int>().swap(v);
    vector<pair<int, int>>().swap(res);
}