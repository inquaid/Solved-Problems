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
    int mx, mn;
    cin >> mx >> mn;
    int size = (2 * ((mx - mn) - 1)) + 2;
    cout << size << endl;

    for (int i = mx; i > mn; i--)
    {
        cout << i << " ";
    }

    for (int i = mn; i < mx; i++)
    {
        cout << i << " ";
    }

    cout << endl;
}