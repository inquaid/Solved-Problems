#include <bits/stdc++.h>
using namespace std;

int v[1011][1011], pre_sum[1011][1011];
int main()
{
    int r, c;
    cin >> r >> c;
    // vector<vector<int>> v(r + 1, vector<int>(c + 1));
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> v[i][j];
        }
    }
    // vector<vector<int>> pre_sum(r + 1, vector<int>(c + 1));
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            // cout << v[i][j] << " ";
            pre_sum[i][j] = v[i][j] + pre_sum[i - 1][j] + pre_sum[i][j - 1] - pre_sum[i - 1][j - 1];
        }
        // cout << endl;
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << pre_sum[i][j] << " ";
            // v[i][j] = v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1];
        }
        cout << endl;
    }
}