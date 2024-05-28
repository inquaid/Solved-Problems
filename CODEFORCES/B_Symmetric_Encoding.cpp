#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;

        set<char> st(s.begin(), s.end());
        vector<char> v(st.begin(), st.end());
        unordered_map<char, char> mp;
        int m = v.size();

        for (int i = 0; i < m; i++)
        {
            mp[v[i]] = v[m - i - 1];
        }

        for (auto c : s)
        {
            cout << mp[c];
        }
        cout << endl;
    }
}