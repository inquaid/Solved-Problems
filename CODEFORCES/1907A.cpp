#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int temp = s[1] - '0';
        for (int i = 1; i <= 8; i++)
        {
            if (i == temp)
            {
                continue;
            }
            else
            {
                cout << s[0] << i << endl;
            }
        }
        for (char i = 'a'; i <= 'h'; i++)
        {
            if (i == s[0])
            {
                continue;
            }
            else
            {
                cout << i << s[1] << endl;
            }
        }
    }
}