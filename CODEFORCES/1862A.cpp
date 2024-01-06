#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, m;
        cin >> n >> m;
        char ary[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ary[i][j];
            }
        }
        int cnt = 0;

        for (int i = 0; i < m; i++)
        {
            // cnt = 0;
            for (int j = 0; j < n; j++)
            {

                if (cnt == 0 && ary[j][i] == 'v')
                {
                    cnt++;
                    break;
                }

                if (cnt == 1 && ary[j][i] == 'i')
                {
                    cnt++;
                    break;
                }

                if (cnt == 2 && ary[j][i] == 'k')
                {
                    cnt++;
                    break;
                }

                if (cnt == 3 && ary[j][i] == 'a')
                {
                    cnt++;
                    break;
                }
            }
            if (cnt == 4)
            {
                break;
            }
        }
        if (cnt == 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}