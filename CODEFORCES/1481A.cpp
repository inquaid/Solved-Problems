#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define FOR(a, b, i) for (int i = (a); i < (b); i++)
#define ROF(b, a, i) for (int i = (b); i > (a); i--)

int main()
{
    flash;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, X = 0, Y = 0, cx = 0, cy = 0, Cx = 0, Cy = 0;
        string s;
        cin >> x >> y >> s;

        FOR(0, s.size(), i)
        {
            if (s[i] == 'U')
            {
                cy++;
            }
            else if (s[i] == 'D')
            {
                Cy++;
            }
            else if (s[i] == 'R')
            {
                cx++;
            }
            else if (s[i] == 'L')
            {
                Cx++;
            }
        }

        if ((x >= 0 && cx >= x) || (x <= 0 && Cx >= -x))
        {
            if ((y >= 0 && cy >= y) || (y <= 0 && Cy >= -y))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
}
