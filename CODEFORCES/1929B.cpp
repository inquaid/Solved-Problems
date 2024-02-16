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
    int n, k;
    cin >> n >> k;
    if (k >= ((4 * n) - 2))
    {
        cout << 2 * n << endl;
    }
    else
        cout << (k+1)/2 << endl;
}