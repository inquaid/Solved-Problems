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
    string s;
    cin >> s;
    int re = (25 * (s[0] - 'a')) + ((s[1] - 'a') < (s[0] - 'a') ? s[1] - 'a' : s[1] - 'a' - 1) + 1;
    // if (s[0] == 'a')
    cout << re << endl;
    // else
    // cout << re + 1 << endl;
}