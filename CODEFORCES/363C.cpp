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
    string s;
    cin >> s;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            int j = i + 2;
            while (s[j] == s[i] && j < s.size())
            {
                s.erase(j, 1);
            }
        }
    }
    if (s.size() < 4)
    {
        cout << s;
        return 0;
    }
    for (int i = 0; i < s.size() - 3; i++)
    {
        while (s[i] == s[i + 1] && s[i + 2] == s[i + 3] && !s.empty())
        {
            s.erase(i + 2, 1);
        }
    }

    cout << s;
    return 0;
}
