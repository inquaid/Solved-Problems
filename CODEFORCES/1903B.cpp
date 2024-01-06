#include <iostream>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int size;
        cin >> size;

        int matrix[size + 1][size + 1];

        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                cin >> matrix[i][j];
            }
        }

        int result[size + 1];

        for (int i = 1; i <= size; i++)
        {
            int temp = (1LL << 30) - 1;
            for (int j = 1; j <= size; j++)
            {
                if (i != j)
                {
                    temp = (temp & matrix[i][j]);
                }
            }
            result[i] = temp;
        }

        bool is_valid = true;

        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if ((result[i] | result[j]) != matrix[i][j] && i != j)
                {
                    is_valid = false;
                }
            }
        }

        cout << (is_valid ? "YES" : "NO") << endl;

        if (is_valid)
        {
            for (int i = 1; i <= size; i++)
            {
                cout << result[i] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}