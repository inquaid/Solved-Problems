#include <bits/stdc++.h>
using namespace std;

int n, m;

bool is_true();
int sum_of_digits(int n);

int sum_of_digits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sum_of_digits(n / 10);
}

int main()
{
    cin >> n >> m;
    // cout << sum_of_digits(n);
    for (int a = 0; a <= 2230; a++)
    {
        for (int b = 0; b <= 2230; b++)
        {
            int s_a = sum_of_digits(a);
            int s_b = sum_of_digits(b);
            int s_ab = sum_of_digits(a + b);

            if (s_a >= n and s_b >= n and s_ab <= m and a != b)
            {
                cout << a << "\n"
                     << b;
                return 0;
            }
        }
    }
}