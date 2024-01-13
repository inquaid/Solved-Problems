#include <bits/stdc++.h>
#define t 8
using namespace std;

#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool R(string s)
{
    for (int i = 0; i < t; i++)
    {
        if (s[i] != 'R')
        {
            return false;
        }
    }
    return true;
}

bool row(string s)
{
    for (int i = 0; i < t; i++)
    {
        if (R(s))
        {
            return true;
        }
    }

    return false;
}
int main()
{
    flash;
    int T;
    cin >> T;
    string s[8], temp;
    while (T--)
    {
        for (int i = 0; i < t; i++)
        {
            cin >> s[i];
        }
        bool isR = false, isC = false;
        for (int i = 0; i < t; i++)
        {
            isR = row(s[i]);
            if (isR)
            {
                isR = true;
                cout << 'R' << endl;

                break;
            }
        }

        if (!isR)
        {
            cout << 'B' << endl;
        }
    }
}
