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
    int a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;

    if (d < b)
    {
        cout << -1 << endl;
        return;
    }
    int distance_y = (d - b);
    int distance_x = c - distance_y;
    if (distance_x > a)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << distance_y + (a - distance_x) << endl;
    }
}