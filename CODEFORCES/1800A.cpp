#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        string str;
        cin >> n >> str;
        if ((str[0] == 'm' || str[0] == 'M') && (str[n - 1] == 'w' || str[n - 1] == 'W'))
        {
            for (int i = 0; i < n; i++)
            {

                if (cnt == 0 && (str[i] == 'e' || str[i] == 'E'))
                {
                    cnt++;
                }
                else if (cnt == 1 && (str[i] == 'o' || str[i] == 'O'))
                {
                    cnt++;
                }
                else if (cnt == 2 && (str[i] == 'w' || str[i] == 'W'))
                {
                    cnt++;
                }
                else if (cnt == 0 && (str[i] != 'm' && str[i] != 'M'))
                {
                    cnt = 5;
                    break;
                }
                else if (cnt == 1 && (str[i] != 'e' && str[i] != 'E'))
                {
                    cnt = 5;
                    break;
                }
                else if (cnt == 2 && (str[i] != 'o' && str[i] != 'O'))
                {
                    cnt = 5;
                    break;
                }
                else if (cnt == 3 && (str[i] != 'w' && str[i] != 'W'))
                {
                    cnt = 5;
                    break;
                }
            }
            (cnt == 3) ? cout << "YES" << endl : cout << "NO" << endl;
        }

        else
            cout << "NO" << endl;
    }
}