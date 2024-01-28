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
    int size = s.length(), cnt = 0;
    bool can = true;
    while (!s.empty())
    {
        can = false;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                s.erase(i, 2);
                cnt++;
                can = true;
                break;
            }
        }
        if (!can)
        {
            break;
        }
    }

    cout << (cnt % 2 == 0 ? "NET\n" : "DA\n");
}