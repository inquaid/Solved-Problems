#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 1; i < s.length() - 1; i++)
        {
            cout << s[i];
            /* code */
        }
        cout << s[0] << endl;
        // cout << s << endl;
    }
}