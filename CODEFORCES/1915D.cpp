#include <bits/stdc++.h>
using namespace std;
void slv()
{
    long long n;
    string s;
    cin >> n >> s;

    string ree = "";
    bool re = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e')
        {
            ree += s[i];
            re = true;
            if (i + 2 < n && (s[i + 2] == 'e' || s[i + 2] == 'a'))
            {
                re = false;
                ree += '.';
            }
        }
        else
        {
            ree += s[i];
            if (re)
            {
                ree += '.';
                re = false;
            }
        }
    }

    if (ree.back() == '.')
    {
        ree.pop_back();
    }

    cout << ree << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slv();
    }

    return 0;
}