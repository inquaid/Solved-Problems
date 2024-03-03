#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long

void solve();

signed main()
{
    flash;
    int a, b;
    cin >> a >> b;
    if ((a + b) > 0)
    {
        cout << (a + b) - 1;
    }
    else
        cout << 1;

    return 0;
}
