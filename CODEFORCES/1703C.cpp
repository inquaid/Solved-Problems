#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define FOR(a, b, i) for (int i = (a); i < (b); i++)
#define ROF(b, a, i) for (int i = (b); i > (a); i--)
#define Y cout << "YES\n"
#define N cout << "NO\n"

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
        int tt;
        cin >> tt;
        vector<int> ary(tt);
        for (auto &i : ary)
        {
            cin >> i;
        }
        int n;
        string s;

        FOR(0, tt, i)
        {
            cin >> n >> s;
            FOR(0, n, j)
            {

                if (s[j] == 'D' && ary[i] == 9)
                {
                    ary[i] = 0;
                }
                else if (s[j] == 'U' && ary[i] == 0)
                {
                    ary[i] = 9;
                }
                else if (s[j] == 'D')
                {
                    ary[i]++;
                }
                else
                    ary[i]--;
            }
        }

        for (auto i : ary)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}