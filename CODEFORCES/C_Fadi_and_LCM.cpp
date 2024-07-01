#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    int a = 1;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && lcm(i, n / i) == n)
        {
            a = n / i;
        }
    }
    int b = n / a;
    cout << a << " " << b << endl;
}