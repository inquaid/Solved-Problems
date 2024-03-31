#include <bits/stdc++.h>
using namespace std;
#define int long long

int not_prime[(int)1e7];

void seive()
{
    not_prime[0] = not_prime[1] = true;
    for (int i = 2; i < 1e7; i++)
    {
        if (!not_prime[i])
        {
            for (int j = i + i; j < 1e7; j += i)
            {
                not_prime[j] = true;
            }
        }
    }
}

void solve();
signed main()
{
    seive();
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
    int a, b, i, j;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                cout << j << " " << i - j << endl;
                return;
            }
        }
    }
    // cout << -1 << endl;

    cout << -1 << endl;
}