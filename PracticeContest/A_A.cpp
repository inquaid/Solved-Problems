#include <bits/stdc++.h>
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

void solve();

int main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, first = 0, last = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[0])
        {
            first++;
        }
        else
            break;
    }
    for (int j = n - 1; j >= 0; j--)
    {
        if (v[j] == v[n - 1])
        {
            last++;
        }
        else
            break;
    }
    if (v[0] == v[n - 1])
    {
        if ((n - first - last) < 0)
        {
            cout << 0 << endl;
        }
        else

            cout << n - first - last << endl;
    }
    else
    {
        if ((n - first - last) < 0)
        {
            cout << 0 << endl;
        }
        else
            cout << n - max(first, last) << endl;
    }
}