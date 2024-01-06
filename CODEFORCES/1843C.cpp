#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long n, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        unsigned long long sum = 0;
        for (unsigned long long i = 0;; i++)
        {
            sum += (a);
            a /= 2;
            a = floor(a);
            if (a < 1)
            {
                break;
            }
        }

        cout << sum << endl;
    }
}