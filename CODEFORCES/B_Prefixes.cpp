#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            s[i] = 'a';
            s[i + 1] = 'b';
        }
    }
    cout << cnt << endl
         << s;
}