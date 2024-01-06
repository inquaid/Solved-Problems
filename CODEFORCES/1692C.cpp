#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        char art[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> art[i][j];
            }
        }
        // cout<<endl;
        int temp = -1, cnt = 0, cntt = 0;
        for (int i = 0; i < 8; i++)
        {
            cnt = 0;
            for (int j = 0; j < 8; j++)
            {
                // cout<<art[i][j];
                if (art[i][j] == '#')
                {
                    cnt++;
                    temp = j;
                }
            }

            if (cnt == 2)
            {
                cntt = 5;
            }

            if (cntt == 5 && cnt == 1)
            {
                cout << i + 1 << " " << temp + 1 << endl;
                break;
            }
        }
    }
}