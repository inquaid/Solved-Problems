#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ary[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ary[i][j];
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (ary[0][i] > ary[0][j])
                {
                    swap(ary[0][i], ary[0][j]);
                    swap(ary[1][i], ary[1][j]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (ary[0][i] <= k)
            {
                k += ary[1][i];
            }
        }

        cout << k << endl;
    }
}