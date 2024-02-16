#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    flash;
    int row = 5, column = 5, a, b;
    // cin >> row >> column;
    int matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(2 - a) + abs(2 - b);
    return 0;
}
