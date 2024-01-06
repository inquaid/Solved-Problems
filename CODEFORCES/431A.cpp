#include <bits/stdc++.h>
using namespace std;

#define out(x) cout << x << "\n"
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define FOR(a, b, i) for (int i = (a); i < (b); i++)
#define ROF(b, a, i) for (int i = (b); i > (a); i--)

int main()
{
    flash;

    int ary[5], re = 0;
    string s;
    cin >> ary[1] >> ary[2] >> ary[3] >> ary[4] >> s;
    FOR(0, s.size(), i)
    {
        re += ary[s[i] - '0'];
    }
    cout << re;
}