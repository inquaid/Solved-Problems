#include <bits/stdc++.h>
using namespace std;

int ary[300][300], pre_sum[300][300];
int main()
{

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> ary[i][j];
        }
    }
    int res = ary[n][m];
    // cout << res << " ";
    // for (int i = n; i > 1; i--)
    // {
    //     for (int j = m; j > 1; j--)
    //     {
    //         // pre_sum[i][j] = ary[i][j] + pre_sum[i - 1][j] + pre_sum[i][j - 1] - pre_sum[i - 1][j - 1];

    //         int temp = min(ary[i - 1][j], ary[i][j - 1]);
    //         res += temp;
    //         cout << temp << " ";
    //     }
    // }

    int i = n, j = m;
    while (i > 1 and j > 1)
    {
        // if both are equal then use while loop to check last not equal
        int tempi = i, tempj = j;
        if (ary[i - 1][j] == ary[i][j - 1])
        {
            res += ary[i - 1][j];
            i--;
            j--;
        }

        if (ary[i - 1][j] < ary[i][j - 1])
        {
            res += ary[i - 1][j];
            // cout << ary[i - 1][j] << " ";
            i--;
        }
        else
        {
            res += ary[i][j - 1];
            // cout << ary[i][j - 1] << " ";
            j--;
        }
    }

    while (j > 1)
    {
        j--;
        res += ary[i][j];
        // cout << ary[i][j] << " ";
    }

    while (i > 1)
    {
        i--;
        res += ary[i][j];
    }

    // res += ary[1][1];
    cout << res;
}
