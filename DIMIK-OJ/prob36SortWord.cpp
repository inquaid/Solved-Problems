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
        cin.ignore();
        set<string> s;
        string ss;
        for (int i = 0; i < n; i++)
        {
            getline(cin, ss);
            s.insert(ss);
        }
        for (auto i : s)
        {
            cout << i << endl;
        }
        // cout << endl;
    }
}