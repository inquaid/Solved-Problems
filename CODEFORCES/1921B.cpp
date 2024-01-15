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
    int t, cnt = 0, a = 0, b = 0;
    cin >> t;
    string S, s;
    cin >> S >> s;
    for (int i = 0; i < t; i++)
    {
        if (S[i] != s[i])
        {
            if (S[i] == '1')
            {
                a++;
            }
            if (s[i] == '1')
            {
                b++;
            }
        }
    }
    cout << max(a, b) << endl;
}
