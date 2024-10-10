#include <bits/stdc++.h>
using namespace std;
#define int long
// int cnt = 0;
int func(vector<vector<int>> &v, int column, int row, int height, int n, vector<vector<int>> &dp)
{
    // cnt++;
    // if (row > height or column > n)
    // {
    //     return 0;
    // }
    if (dp[row][column] != -1)
    {
        return dp[row][column];
    }
    if (row == height)
    {
        return v[row][column];
        cout << row << " " << column << " " << v[row][column] << " \n";
        // if (row <= height and column <= n)
        // {
        // }
        // else
        //     return 0;
    }
    // return v[row].back();
    int leftChild = func(v, column, row + 1, height, n, dp);
    int rightChild = func(v, column + 1, row + 1, height, n, dp);

    dp[row][column] = v[row][column] + max(leftChild, rightChild);

    return dp[row][column];
}

signed main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int height = (2 * n) - 1;
        // vector<int> v[height + 1];
        vector<vector<int>> v(height + 2, vector<int>(n + 1, 0));
        vector<vector<int>> dp(height + 2, vector<int>(n + 1, -1));

        for (int i = 1; i <= n; i++)
        {
            // v[i].push_back(0);
            for (int j = 0; j < i; j++)
            {
                int temp;
                cin >> temp;
                v[i][j] = temp;
            }
        }
        for (int i = 2; i <= n; i++)
        {

            for (int intput = i; intput <= n; intput++)
            {
                int temp;
                cin >> temp;
                v[i + n - 1][intput] = temp;
            }
        }
        // cout << height << " " << n << endl;
        // cout << v[height][n] << " ";
        // cout << height << " " << v->size() << endl;
        // cout << v[1][1] << "";
        // cout << height << "\n";
        for (auto i : v)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        cout << endl;
        // cout << v[1][0] << " ";
        // height++;
        // n++;
        // func(v, 1, 1, height);
        // vector<vector<int>> dp(height + 2, 0);
        // cnt = 0;
        // cout << "Case " << i << ": " << func(v, 0, 1, height, n, dp) << '\n';
        // cout << cnt << endl;
    }
}