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
        set<char> s;
        string ss;
        cin >> ss;
        for (int i = 0; i < ss.size(); i++)
        {
            s.insert(ss[i]);
        }

        set<char> ssa;
        string sa;
        cin >> sa;
        for (int i = 0; i < sa.size(); i++)
        {
            ssa.insert(sa[i]);
        }

        vector<char> in;
        set_intersection(s.begin(), s.end(), ssa.begin(), ssa.end(), back_inserter(in));
        if (!in.empty())
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}