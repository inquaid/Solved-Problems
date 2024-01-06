#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define FOR(a, b, i) for (int i = (a); i < (b); i++)
#define ROF(b, a, i) for (int i = (b); i > (a); i--)

bool even(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    flash;

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c;
        d = c + abs(a - b);
        e = c - abs(a - b);
        int n = 2 * abs(a - b);
        if (a > n || b > n || c > n)
        {
            cout << -1 << endl;
        }
        else if (d <= n && d >= 1)
        {
            cout << d << endl;
        }

        else
        {
            cout << e << endl;
        }
    }
}