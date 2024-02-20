#include <bits/stdc++.h>
using namespace std;
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
    int a, b;
    cin >> a >> b;
    if (a == 1 || b == 1 || (a == 2 && b == 2))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}