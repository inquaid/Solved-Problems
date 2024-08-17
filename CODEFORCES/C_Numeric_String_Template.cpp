#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
void solve();
map<int, int> mp;
map<int, char> mp2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}

void solve()
{
    mp.clear();

    int n;
    cin >> n;

    vector<int> a(n);
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (mp[temp] == 0)
        {
            mp[temp] = cnt++;
        }
        a[i] = mp[temp];
    }

    int m;
    cin >> m;

    string s;

    for (int i = 0; i < m; i++)
    {
        cin >> s;
        int len = s.size();
        if (len != n)
        {
            cout << "NO\n";
            continue;
        }
        cnt = 1;
        mp2.clear();
        bool is = true;
        for (int j = 0; j < len; j++)
        {
            if (mp2[s[j]] == 0)
            {
                mp2[s[j]] = cnt++;
            }
            if (mp2[s[j]] != a[j])
            {
                cout << "NO\n";
                is = false;
                break;
            }
        }
        if (is)
            cout << "YES\n";
    }
}