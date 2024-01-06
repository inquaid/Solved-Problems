#include <iostream>
#define N cout << "NO" << endl
#define Y cout << "YES" << endl
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;

        if (n < k)
        {
            N;
        }
        else
        {
            long long sum = k * (k + 1) / 2;
            long long summ = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;

            if (x <= summ && x >= sum)
            {
                Y;
            }
            else
                N;
        }
    }
}