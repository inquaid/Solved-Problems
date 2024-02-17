#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
#define int long long
void solve();

signed main()
{
    flash;
    int n, m, temp, sum = 0, store;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        if (i == 0)
        {
            sum = temp - 1;
            store = temp - 1;
        }
        else
        {
            if (temp >= store)
            {
                sum += (temp - store);
            }
            else
            {
                sum += (n - abs(temp - store));
            }
        }
        store = temp;
    }
    cout << sum;
    return 0;
}
