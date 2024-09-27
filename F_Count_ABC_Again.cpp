#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            cnt++;
        }
    }

    while (q--)
    {
        int x;
        char c;
        cin >> x >> c;
        int i = x - 1;
        if (c == 'A')
        {
            if (s[i] == 'A')
            {
                // continue;
            }
            else if ((i > 1 && i < (n - 2)) && (s[i - 2] == 'A' && s[i - 1] == 'B' && s[i] == 'C' && s[i + 1] == 'B' && s[i + 2] == 'C'))
            {
                s[i] = 'A';
            }
            else if ((i < (n - 2)) && (s[i] != 'A' && s[i + 1] == 'B' && s[i + 2] == 'C'))
            {
                cnt++;
                s[i] = 'A';
            }
            // else if ((i < (n - 2)) && (s[i + 1] != 'B' || s[i + 2] != 'C'))
            // {
            //     s[i] = 'A';
            // }
            else if ((i > 0 && i < (n - 1)) && (s[i - 1] == 'A' && s[i] == 'B' && s[i + 1] == 'C'))
            {
                cnt--;
                s[i] = 'A';
            }
            else if ((i > 1) && (s[i] == 'C' && s[i - 1] == 'B' && s[i - 2] == 'A'))
            {
                cnt--;
                s[i] = 'A';
            }
            else
            {
                s[i] = 'A';
            }
        }
        else if (c == 'C')
        {
            if (s[i] == 'C')
            {
                // continue;
            }
            else if ((i > 1 && i < (n - 2)) && (s[i - 2] == 'A' && s[i - 1] == 'B' && s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C'))
            {
                s[i] = 'C';
            }
            else if (((i > 1)) && (s[i] != 'C' && s[i - 1] == 'B' && s[i - 2] == 'A'))
            {
                cnt++;
                s[i] = 'C';
            }
            // else if ((i > 2) && (s[i - 1] != 'B' || s[i - 2] != 'A'))
            // {
            //     s[i] = 'C';
            // }
            else if ((i < n - 2) && (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C'))
            {
                cnt--;
                s[i] = 'C';
            }
            else if ((i > 0 && i < n - 1) && (s[i - 1] == 'A' && s[i] == 'B' && s[i + 1] == 'C'))
            {
                cnt--;
                s[i] = 'C';
            }
            else
            {
                s[i] = 'C';
            }
        }

        else if (c == 'B')
        {
            if (s[i] == 'B')
            {
                // continue;
            }
            else if ((i > 0 && i < n - 1) && (s[i - 1] == 'A' && s[i] != 'B' && s[i + 1] == 'C'))
            {
                cnt++;
                s[i] = 'B';
            }
            // else if ((i > 0 && i < n - 1) && (s[i - 1] != 'A' || s[i + 1] != 'C'))
            // {
            //     s[i] = 'B';
            // }
            else if ((i < n - 2) && (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C'))
            {
                cnt--;
                s[i] = 'B';
            }
            else if ((i > 1) && (s[i - 2] == 'A' && s[i - 1] == 'B' && s[i] == 'C'))
            {
                cnt--;
                s[i] = 'B';
            }
            else
            {
                s[i] = 'B';
            }
        }
        else
        {
            if (s[i] != 'A' && s[i] != 'B' && s[i] != 'C')
            {
                s[i] = c;
            }
            else if ((i < (n - 2)) && (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C'))
            {
                cnt--;
                s[i] = c;
            }

            else if ((i > 0 && i < (n - 1)) && (s[i - 1] == 'A' && s[i] == 'B' && s[i + 1] == 'C'))
            {
                cnt--;
                s[i] = c;
            }

            else if ((i > 1) && (s[i - 2] == 'A' && s[i - 1] == 'B' && s[i] == 'C'))
            {
                cnt--;
                s[i] = c;
            }
            else
            {
                s[i] = c;
            }
        }
        cout << cnt << endl;
    }
}