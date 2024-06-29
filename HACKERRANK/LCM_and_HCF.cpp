#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int LCM(int a, int b)
{
    return (a * b) / gcd(a, b);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << LCM(a, b) << " " << gcd(a, b) << endl;
        // cout << LCM(a, b) << " " << lcm(a, b) << endl;
    }
}