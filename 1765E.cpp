#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

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
}

void solve()
{
    double n, a, b;
    cin >> n >> a >> b;
    if (a > b)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << (int)ceil(n / a) << endl;
    }
}
