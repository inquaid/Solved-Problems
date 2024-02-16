#include <bits/stdc++.h>
using namespace std;
int main()
{

    double pi = 2 * acos(0.0);
    double radius;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        {
            cin >> radius;
            double AreaOfCircle = pi * radius * radius;
            double AreaOfSquare = (2 * radius) * (2 * radius);
            double result = AreaOfSquare - AreaOfCircle;
            printf("Case %d: %0.2lf\n", i, result);
            // cout << pi;
        }
    }
    return 0;
}