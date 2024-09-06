#include <bits/stdc++.h>
using namespace std;
#define ln 1010

int ary[ln][ln], pre_sum[ln][ln];
int main()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 1; j <= n; j++)
        {
            ary[i][j] = (temp[j - 1] == '*' ? 1 : 0);
            pre_sum[i][j] = ary[i][j] + pre_sum[i - 1][j] + pre_sum[i][j - 1] - pre_sum[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= q; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        // y1--;
        // x1--;
        // y2--;
        // x2--;
        cout << (pre_sum[x2][y2] - pre_sum[x2][y1-1] - pre_sum[x1-1][y2] + pre_sum[x1-1][y1-1])<<endl;
    }
}