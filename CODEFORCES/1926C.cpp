#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

long long sumD[1000005];

void precompute()
{
    for (int i = 0; i < 1000005; i++)
    {
        int n = i;
        while (n)
        {
            sumD[i] += n % 10;
            n /= 10;
        }
        if (i != 0)
            sumD[i] += sumD[i - 1];
    }
}

signed main()
{
    flash;
    precompute();
    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        cout << sumD[n] << endl;
    }
    return 0;
}
