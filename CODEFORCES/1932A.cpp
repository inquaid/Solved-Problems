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
    int n, coin = 0, cnt = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 2)
        {
            break;
        }
        if (s[i] == '@')
        {
            coin++;
        }
        if (s[i] == '*')
        {
            cnt++;
        }
        else
            cnt = 0;
    }

    cout << coin << endl;
}