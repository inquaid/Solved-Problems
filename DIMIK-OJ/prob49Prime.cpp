#include <bits/stdc++.h>
using namespace std;
// #define size 1e12
#define int unsigned long long
// const unsigned long long size = 1e12;
// vector<bool> ary(size,false);

bool isprime(long n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        if (i >= 1000)
        {
            break;
        }
    }
    return true;
}
signed main()
{
    // check();
    int t, i, temp;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isprime(n))
        {
            cout << n << " is a prime\n";
        }
        else
            cout << n << " is not a prime\n";
    }
}