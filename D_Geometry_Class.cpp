#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592654
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        cout<<a<<endl;

        double mx = max({a, b, c});

        double angle = asin(mx);

        double deg = (angle * 180.0) /PI;

        cout << round(deg) << endl;
    }

    return 0;
}
