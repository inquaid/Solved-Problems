#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define FOR(a, b, i) for (int i = (a); i < (b); i++)
#define ROF(b, a, i) for (int i = (b); i > (a); i--)

bool ary[60];

int check(int n)
{

    if (!ary[n])
    {
        ary[n] = true;
        return n;
    }
    else
        return -1;
}

int main()
{
    flash;

    int t;
    cin >> t;
    while (t--)
    {
        fill(ary, ary + 60, false);
        int a, temp;
        cin >> a;
        FOR(0, 2 * a, i)
        {
            cin >> temp;
            if (check(temp) != -1)
            {
                cout << temp << " ";
            }
        }
        cout << endl;
    }
}