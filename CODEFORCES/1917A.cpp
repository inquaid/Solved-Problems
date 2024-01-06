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

    int T;
    cin >> T;
    while (T--)
    {
        int a, temp, h = 0, z = 0;
        cin >> a;
        FOR(0, a, i)
        {
            cin >> temp;
            if (temp < 0)
            {
                h++;
            }
            else if (temp == 0)
            {
                z++;
            }
        }
        if (z > 0 || h % 2 != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl
                 << 1 << " " << 0 << endl;
        }
    }
}