#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mn = min({a, b, c});
        for (int i = 0; i < 5; i++)
        {
            // mn = min({a, b, c});
            if (a <= b && a <= c)
            {
                // cout << a << " ";
                a++;
            }
            else if (b <= a && b <= c)
            {
                // cout << b << " ";
                b++;
            }
            else
            {
                // cout << c << " ";
                c++;
            }
        }
        cout << a * b * c << endl;
    }
}
