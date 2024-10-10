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
    int n;
    cin >> n;
  
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << n/i << " " << n - (n/i) << endl;
            return;
        }
    }
    cout << n - 1 << " " << 1 << endl;
}