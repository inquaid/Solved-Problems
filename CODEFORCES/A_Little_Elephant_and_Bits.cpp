#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool flag = true;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            flag = false;
            s.erase(i, 1);
            break;
        }
    }
    if (flag)
    {
        s.erase(0, 1);
    }
    cout << s;
}