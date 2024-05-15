#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        int sz = s.size();
        for (int i = 0; i < sz - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
            {
                cnt++;
                i++;
            }
            else if (s[i] == '0' && s[i + 1] == '1')
            {
                cnt++;
                i++;
            }
        }

        cout << cnt << endl;
    }
}