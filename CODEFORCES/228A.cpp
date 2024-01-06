#include <iostream>
using namespace std;

long long is_equal(long long a, long long b)
{
    return (a == b) ? 1 : 0;
}

int main()
{
    long long a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;
    if (is_equal(a, b) || is_equal(a, d) || is_equal(a, c))
    {
        cnt++;
    }
    if (is_equal(b, c) || is_equal(b, d))
    {
        cnt++;
    }
    if (is_equal(c, d))
    {
        cnt++;
    }

    cout << cnt;
}