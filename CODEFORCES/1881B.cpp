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
    vector<int> ary(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> ary[i];
    }
    sort(ary.begin(), ary.end());

    int a = ary[0], b = ary[1], c = ary[2];
    if (a == b && b == c)
    {
        cout << "YES\n";
        return;
    }

    if (!(b % a) && !(c % a) && ((b / a) - 1 + (c / a) - 1) <= 3)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
