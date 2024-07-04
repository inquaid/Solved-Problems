#include <bits/stdc++.h>
using namespace std;

map<int, int> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int p = 0, q = 0;
    map<int, map<int, char, greater<int>>> mp;

    for (int i = 0; i < n; i++)
    {

        mp[p][cnt[p]] = s[i];
        cnt[p]++;
        if (s[i] == '(')
            p++;

        else
            p--;
    }

    for (auto i : mp)
        for (auto j : i.second)
            cout << j.second;
}