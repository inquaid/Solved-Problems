#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
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
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k), v;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        if (i == 0)
            v.push_back(a[i]);
        else
        {
            v.push_back(a[i] - a[i - 1]);
        }
    }

    if (k == 1)
    {
        cout << "Yes\n";
        return;
    }

    if (is_sorted(v.begin() + 1, v.end()) == false)
    {
        cout << "No\n";
        return;
    }

    int div = n - k + 1, smallest;
    if (v[0] % div == 0 || v[0] < 0)
    {
        smallest = v[0] / div;
    }
    else
    {
        smallest = floor(v[0] / div) + 1;
    }

    if (smallest <= v[1])
    {
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
}