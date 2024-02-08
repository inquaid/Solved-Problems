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
    int a;
    cin >> a;
    // a = abs(a);
    a *= 567;
    a /= 9;
    a += 7492;
    a *= 235;
    a /= 47;
    a -= 498;
    // cout << a;

    cout << abs((a % 100) / 10) << endl;
}