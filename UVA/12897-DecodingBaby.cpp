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
    // cout << T;
    while (T--)
    {
        solve();
    }

    return 0;
}
void solve()
{
    string s;
    char a, b;
    cin >> s;
    int n;
    cin >> n;
    map<char, char> m;
    for (char i = 'A'; i <= 'Z'; i++)
        m[i] = i;
    m['_'] = '_';
    while (n--)
    {
        cin >> a >> b;
        for (auto &it : m)
        {
            if (it.second == b)
            {
                it.second = a;
            }
        }
    }
    for (char &c : s)
    {
        c = m[c];
    }
    cout << s << endl;
}
