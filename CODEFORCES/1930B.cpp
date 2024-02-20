#include <bits/stdc++.h>
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

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
    int n, temp, first = 1;
    cin >> n;
    temp = n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << first++;
        }
        else
        {
            cout << temp--;
        }
        cout << " ";
    }

    cout << endl;
}
