#include <bits/stdc++.h>
using namespace std;

#define int long long

int SQRT(int n)
{
    int x = sqrt(n) + 2;
    while (x * x > n)
    {
        x--;
    }
    return x;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        cout << SQRT(n - 1ll) << endl;
    }
}