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
        string ss = "po", dd = "masu", ff = "desu";
        if (s.size() >= ss.size() && s.substr(s.size() - ss.size()) == ss)
        {
            cout << "FILIPINO";
        }

        else if (s.size() >= dd.size() && s.substr(s.size() - dd.size()) == dd)
        {
            cout << "JAPANESE";
        }

        else if (s.size() >= ff.size() && s.substr(s.size() - ff.size()) == ff)
        {
            cout << "JAPANESE";
        }
        else
        {
            cout << "KOREAN";
        }

        cout << endl;
    }
}