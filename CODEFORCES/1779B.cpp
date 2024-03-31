#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        if (!(n & 1))
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                if (!(i & 1))
                    cout << 1 << " ";
                else
                    cout << -1 << " ";
            }
            cout << "\n";
        }
        else
        {
            if (n < 5)
                cout << "NO\n";
            else
            {
                cout << "YES\n";
                int k = floor(n / 2);
                for (int i = 0; i < n; i++)
                {
                    if (!(i & 1))
                        cout << k - 1 << " ";
                    else
                        cout << -k << " ";
                }
                cout << "\n";
            }
        }
    }
}