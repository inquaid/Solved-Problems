#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long

void solve();

signed main()
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
    string temp = s;
    reverse(s.begin(), s.end());

    // int sz = s.size();
    // string a = s.substr(0, sz / 2), b = s.substr(sz / 2, sz - (sz / 2)); // Corrected here
    // cout << a << " " << b << endl;
    if (temp > s)
    {
        cout << s << temp << endl;
    }
    else
        cout << temp << endl;
}
