#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, t, y = 0;
    cin >> n >> t;
    int d = log10(t) + 1;
    // cout<<d;
    if (d > n)
    {
        cout << -1;
        return 0;
    }
    if (t == 10)
    {
        t = 1;
        n--;
        y++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << t;
    }
    if (y != 0)
    {
        cout << 0;
    }
}