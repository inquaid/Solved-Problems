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
    int a, b, n, m, result;
    cin >> a >> b >> n >> m;
    int temp = n * min(a, b);
    int temp2 = (n / (m + 1)) * m * a + (n % (m + 1)) * (temp / n);
    int ans = min(min(temp, temp2), (((n + m) / (m + 1)) * m * a));
    cout << ans << endl;
}