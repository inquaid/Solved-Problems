#include <bits/stdc++.h>
#define endl "\n"
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
    string s, check;
    cin >> n >> s;
    int sz = s.size();
    for (int i = 0; i < sz - 1; i++)
    {
        check = "";
        check += s[i];
        check += s[i + 1];
        // cout << check << " a";
        if (s.find(check, s.find(check) + check.size()) != string::npos)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}