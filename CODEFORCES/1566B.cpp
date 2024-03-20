#include <bits/stdc++.h>
using namespace std;

void solve();
void check(string s, int n, char a, char b)
{
    int cnt = 0, i;
    for (i = 0; i < n; i++)
    {
        if (s[i] == a && s[i + 1] == b)
        {
            cnt++;
        }
    }
    if (cnt == 0)
        cout << 0 << endl;
    else if (cnt == 1)
        cout << 1 << endl;

    else
        cout << 2 << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size() - 1, i;
    if (s[0] == '0' && s[n] == '0')
    {
        for (i = 1; i < n; i++)
        {
            if (s[i] == '1')
            {
                cout << 2 << endl;
                return;
            }
        }
        cout << 1 << endl;
        return;
    }
    if (s[0] == '1')
    {
        check(s, n, '1', '0');
        return;
    }
    check(s, n, '0', '1');

    return;
}