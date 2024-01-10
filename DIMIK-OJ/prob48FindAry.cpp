#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t, i, temp;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long result = 0;
        for (i = 1; i <= n; i++)
        {
            result ^= i;
        }
        for (i = 0; i < n - 1; i++)
        {
            cin >> temp;
            result ^= temp;
        }

        cout << result << endl;
    }
}