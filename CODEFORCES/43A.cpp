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
    int t, cnt = 1;
    cin >> t;
    string s, temp, ss;
    cin >> s;
    if (t == 1)
    {
        cout << s << endl;
    }
    else
    {
        FOR(0, t - 1, i)
        {
            cin >> temp;
            if (s == temp)
            {
                cnt++;
            }
            else
            {
                ss = temp;
                cnt--;
            }
        }

        cout << (cnt > 0 ? s : ss) << endl;
    }
}