#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();
int result(int n)
{
    if (n % 2 == 0)
    {
        return n / 2;
    }
    else
        return -n + result(n - 1);
}
signed main()
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
    int start, end;
    cin >> start >> end;
    cout << result(end) - result(start - 1) << endl;
}