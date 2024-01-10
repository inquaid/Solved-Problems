#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> n;
        if (x > n)
        {
            cout << "Invalid!\n";
        }
        else
        {
            for (int i = x; i <= n; i += x)
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }

    return 0;
}