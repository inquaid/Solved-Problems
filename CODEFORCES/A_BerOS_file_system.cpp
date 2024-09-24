#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string res = "";
    for (int i = 0; i < n; i++)
    {
        bool _if_is = false;
        while (s[i] == '/' and i < n)
        {
            _if_is = true;
            i++;
        }
        if (_if_is)
        {
            _if_is = false;
            res += '/';
        }
        if (i < n)
            res += s[i];
    }
    n = res.size() - 1;
    while (res[n] == '/' and n > 0)
    {
        res.pop_back();
        n--;
    }

    cout << res;
}