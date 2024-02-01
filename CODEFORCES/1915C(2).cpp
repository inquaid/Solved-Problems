#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

signed main()
{
    flash;
    double T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, temp, sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        sum += temp;
    }
    if (sum == pow((int)sqrt(sum), 2))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    // cout << sum << endl;
}