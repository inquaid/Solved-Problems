#include <bits/stdc++.h>
using namespace std;
bool valid(vector<int> &a)
{
    int n = a.size();
    vector<int> g(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        g[i] = __gcd(a[i], a[i + 1]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (g[i] < g[i - 1])
        {
            return false;
        }
    }
    return true;
}

void solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    // fill(a);
    for (auto &i : a)
        cin >> i;
    vector<int> g(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        g[i] = __gcd(a[i], a[i + 1]);
    }
    int idx = -1;
    for (int i = 1; i < n - 1; i++)
    {
        if (g[i] < g[i - 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        cout << "YES\n";
        return;
    }
    for (int j = idx - 1; j <= idx + 1; j++)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (i != j)
            {
                v.push_back(a[i]);
            }
        }
        if (valid(v))
        {
            cout << "YES\n";
            // pyes;
            return;
        }
    }
    cout << "NO\n";
}