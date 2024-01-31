#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();
bool isEven(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    return false;
}
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
    int n, temp;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        cin >> temp;
        mp[temp]++;
    }
    if (!isEven((mp[1] + (mp[2] * 2))))
    {
        cout << "NO\n";
    }

    else if (isEven(mp[1]) && isEven(mp[2]) || (!isEven(mp[2]) && mp[1] >= 2))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}