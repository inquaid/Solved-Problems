#include <bits/stdc++.h>
using namespace std;

#define long unsigned long long

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

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

bool isSqrt(long a)
{
    long s = sqrt(a);
    long q = s * s;
    if (q == a)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    flash;
    long T;
    cin >> T;
    while (T--)
    {
        long a;
        cin >> a;

        if (isSqrt(a))
        {
            a = sqrt(a);

            if (isprime(a))
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
}