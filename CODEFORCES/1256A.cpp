#include <bits/stdc++.h>
using namespace std;
#define int long long
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
        int a, b, n, s, temp;
        cin >> a >> b >> n >> s;
        temp = (s % n);
        if (b >= temp && a * n + b >= s)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}