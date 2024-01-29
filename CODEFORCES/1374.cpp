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
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        while (s[i] == '(' && s[i + 1] == ')')
        {
            s.erase(i, 2);
            i--;
        }
    }

    int nn = count(s.begin(), s.end(), '(');
    int m = count(s.begin(), s.end(), ')');
    cout << max(nn, m) << endl;
}