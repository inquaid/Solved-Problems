#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int n, k, cnt = 0;
    cin >> n >> k;
    set<int> st;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            st.insert(i);
            st.insert(n / i);
        }
    }
    vector<int> v(st.begin(), st.end());
    if (k <= (v.size()))
    {
        cout << v[k - 1];
    }
    else
        cout << -1;
}