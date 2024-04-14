#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int cnt = count(s.begin(), s.end(), '1');
    if (cnt == 2)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1] && s[i] == '1')
            {
                cout << "NO";
                return;
            }
        }
        cout << "YES";
        return;
    }
    if (cnt & 1 != 0)
        cout << "NO";
    else
        cout << "YES";
}