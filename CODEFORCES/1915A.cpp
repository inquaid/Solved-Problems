#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        if (a != b && a != c)
        {
            cout << a << endl;
        }

        else if (a != b && b != c)
        {
            cout << b << endl;
        }

        else if (c != b && a != c)
        {
            cout << c << endl;
        }
    }

    return 0;
}
