#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> st;

    // return 0;
    // st.insert(-1);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;

        if (st.empty())
        {
            cout << -1 << endl;
            continue;
        }

        auto res = st.lower_bound(temp);
        if (res == st.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (*res) << endl;
            st.erase(res);
        }
    }
}