#include <bits/stdc++.h>
using namespace std;

int fnc(string s, string c, int l);

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
        string c;
        cin >> c;
        int l = s.length();
        if (fnc(s, c, l))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

int fnc(string s, string c, int l)
{
    for (int i = 0; i < l; i++)
    {
        if (s[i] == c[0] && (i % 2 == 0))
        {

            return 1;
        }
    }
    return 0;
}