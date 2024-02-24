#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int temp = n;
    n = n + (n - 1);
    int matrix[n][n];
    int StartColumn = 0, StartRow = 0, EndColumn = n - 1, EndRow = n - 1, i, j;

    while (StartColumn <= EndColumn && StartRow <= EndRow)
    {
        for (j = StartColumn; j <= EndColumn; j++)
        {
            matrix[StartRow][j] = temp;
        }

        StartRow++;

        for (i = StartRow; i <= EndRow; i++)
        {
            matrix[i][EndColumn] = temp;
        }

        EndColumn--;

        for (j = EndColumn; j >= StartColumn; j--)
        {
            matrix[EndRow][j] = temp;
        }
        EndRow--;
        for (i = EndRow; i >= StartRow; i--)
        {
            matrix[i][StartColumn] = temp;
        }

        StartColumn++;
        temp--;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
