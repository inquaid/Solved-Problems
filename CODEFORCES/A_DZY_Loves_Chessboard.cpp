#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                {
                    s[i][j] = 'B';
                }
                else
                {
                    s[i][j] = 'W';
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
}