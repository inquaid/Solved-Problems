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
        // cout << endl;
    }
}
void solve()
{
    int n;
    cin >> n;
    int size = 2 * n;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (((i / 2 + j / 2) & 1) == 0)
                cout << '#';
            else
                cout << '.';
        }
        cout << '\n';
    }
}
