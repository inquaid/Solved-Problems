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
        int ary[26] = {0}, cnt = 0;
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            ary[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (ary[i] % 2 != 0)
            {
                cnt++;
            }
        }
        if ((cnt - b) > 1)
        {
            cout << "NO";
        }
        else
            cout << "YES";

        cout << endl;
    }
}