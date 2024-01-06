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
        set<int> ss;
        for (int i = 0; i < s.length(); i++)
        {
            ss.insert(s[i]);
        }

        if (s.length() == 1)
        {
            cout << s;
        }
        else if (s.length() == 2)
        {
            cout << s[1];
        }
        else
        {
            cout << char(*ss.begin());
        }

        cout << endl;
    }

    return 0;
}