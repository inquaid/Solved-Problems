#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve();
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}

void solve()
{
    bool if_is = true;
    int n, m, res;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    cin >> m;
    vector<int> d(m);
    for (auto &i : d)
        cin >> i;

    set<int> st;
    multiset<int> m_set;
    for (int i = 0; i < n; i++)
    {
        st.emplace(b[i]);
        if (a[i] != b[i])
            m_set.emplace(b[i]);
    }
    for (auto i : d)
    {
        if (m_set.end() != m_set.find(i))
        {
            m_set.erase(m_set.find(i));
            continue;
        }
        if (st.end() != st.find(i))
        {
            if (if_is == false)
            {
                if_is = true;
            }
            continue;
        }
        if (m_set.empty())
        {
            if_is = false;
        }
    }
    if (m_set.empty() && if_is)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}