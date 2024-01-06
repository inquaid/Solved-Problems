#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long re = (a * b) / __gcd(a, b);
        if (re == b)
            cout << re * (b / a) << endl;
        else
            cout << re << endl;
    }
}
