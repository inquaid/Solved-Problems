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
    int n, temp, one = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        if (temp == 1)
            one++;
    }
    if (n == 1)
    {
        cout << "NO\n";
        return;
    }
    else if (sum >= one + n)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    cout << endl;
}