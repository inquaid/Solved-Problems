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
    int n;
    cin >> n;
    if (n % 2 == 0 || n == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                cout << i << " ";
            else
                cout << n - i << " ";
        }
    }
    else
        cout << -1;

    cout << endl;
}