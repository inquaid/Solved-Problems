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
        string s, ss;
        cin >> s;
        ss.resize(s.size());
        for (int i = 0, j = s.length() - 1; i < s.size(); i++, j--)
        {
            ss[i] = s[j];
        }
        cout << s << ss << endl;
    }
}