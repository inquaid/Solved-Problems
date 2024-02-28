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
    string a, b;
    cin >> a >> b;
    int sz = a.size();
    int pos_zero, pos_one = -1;

    for (int i = 0; i < sz; i++)
    {

        if (a[i] == b[i] && a[i] == '0' && a[i + 1] == b[i + 1] && b[i + 1] == '1')
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}