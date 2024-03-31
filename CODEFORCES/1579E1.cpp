#include <bits/stdc++.h>
using namespace std;
// #define int long long
void solve();
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
        cout << endl;
    }
}
void solve()
{
    int n, temp;
    cin >> n;
    deque<int> dq;
    deque<int> result;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (i == 0)
            dq.push_back(temp);
        else
        {
            if (temp < dq.front())
            {
                dq.push_front(temp);
            }
            else
                dq.push_back(temp);
        }
    }

    for (auto i : dq)
        cout << i << " ";
}