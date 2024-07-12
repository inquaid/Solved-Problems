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
    }
}

void solve()
{
    int n, jump, swim;
    cin >> n >> jump >> swim;
    string s;
    cin >> s;
    jump--;
    // swim++;
    int ans = 0, cnt_r = 0, cnt_c = 0;
    bool river = false, dile = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            cnt_r++;
            cnt_c = 0;
            if (cnt_r > swim && cnt_r > jump)
            {
                cout << "NO\n";
                return;
            }
        }
        else if (s[i] == 'C')
        {
            cnt_r = 0;
            cnt_c++;
            if (cnt_c > jump)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}