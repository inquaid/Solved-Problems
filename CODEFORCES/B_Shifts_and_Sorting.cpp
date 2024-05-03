#include <bits/stdc++.h>
#define int long long
using namespace std;

#define endl '\n'

int cost(int r, int l)
{
    return abs(r - l) + 1;
}

void solve();
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
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
    string s;
    cin >> s;
    int result = 0;
    int n = s.length(), cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cnt++;
        else if (cnt > 0)
            result += (cnt + 1);
    }

    cout << result;
}
