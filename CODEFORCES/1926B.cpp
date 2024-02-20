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
    string store[n];
    for (int i = 0; i < n; i++)
    {
        cin >> store[i];
    }

    int check[n];

    for (int i = 0; i < n; i++)
    {
        check[i] = count(store[i].begin(), store[i].end(), '1');
    }

    bool square = true;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (check[i] != 0 && check[i + 1] != 0)
        {
            if (check[i] != check[i + 1])
            {
                square = false;
                break;
            }
        }
    }
    if (square)
    {
        cout << "SQUARE\n";
    }
    else
    {
        cout << "TRIANGLE\n";
    }
}