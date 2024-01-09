#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, temp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if ((i == (n - 1) || i == (n - 2)) && i % 2 == 0)
            {

                cout << temp;
            }
            else if (i % 2 == 0)
            {
                cout << temp << " ";
            }
        }

        cout << endl;
    }
}