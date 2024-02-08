#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
    int k;
    while (true)
    {
        cin >> k;
        if (!k)
        {
            break;
        }
        int m, n, x, y;
        cin >> m >> n;
        for (int i = 0; i < k; i++)
        {
            cin >> x >> y;
            if (x == m || y == n)
            {
                cout << "divisa\n";
            }
            else if (x > m && y > n)
            {
                cout << "NE\n";
            }
            else if (x < m && y > n)
            {
                cout << "NO\n";
            }
            else if (x < m && y < n)
            {
                cout << "SO\n";
            }
            else
            {
                cout << "SE\n";
            }
        }
    }

    return 0;
}
