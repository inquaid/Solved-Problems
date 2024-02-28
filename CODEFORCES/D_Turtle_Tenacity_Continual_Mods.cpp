#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    int mn = v[0];
    if (v[0] != v[1])
    {
        cout << "YES\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % mn != 0 && v[i] != mn)
            {
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
    }
}
