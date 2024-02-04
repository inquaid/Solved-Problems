#include <bits/stdc++.h>
using namespace std;
#define int long long
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

signed main()
{
    flash;
    int n, sum = 0, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << sum;

    return 0;
}
