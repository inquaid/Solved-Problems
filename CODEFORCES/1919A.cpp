#include <bits/stdc++.h>
#define int long long
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

signed main()
{
    flash;
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        a += b;
        cout << (a % 2 != 0 ? "Alice\n" : "Bob\n");
    }
}