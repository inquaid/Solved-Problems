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
    int n, mx = 0, temp = 0, store = 0, times = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (i == 0)
            store = temp;
        else if (store >= temp)
        {
            times = ceil(store / (double)temp);

            if (store == temp)
            {
                times = 2;
            }
            else if (store % temp == 0)
            {
                times++;
            }
            store = (temp * times);
        }
        else
        {
            store = temp;
        }
    }

    cout << store << endl;
}