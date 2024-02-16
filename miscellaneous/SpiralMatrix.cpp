#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];
    int temp = 1, i, j, StartRow = 0, StartColumn = 0, EndRow = n - 1, EndColumn = n - 1;
    while (StartRow <= EndRow && StartColumn <= EndColumn)
    {
        for (j = StartColumn; j <= EndColumn; j++)
        {
            matrix[StartRow][j] = temp++;
        }
        StartRow++;

        for (i = StartRow; i <= EndRow; i++)
        {
            matrix[i][EndColumn] = temp++;
        }
        EndColumn--;

        for (j = EndColumn; j >= StartColumn; j--)
        {
            matrix[EndRow][j] = temp++;
        }
        EndRow--;
        for (i = EndRow; i >= StartRow; i--)
        {
            matrix[i][StartColumn] = temp++;
        }
        StartColumn++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
