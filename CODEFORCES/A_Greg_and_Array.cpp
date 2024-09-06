#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    vector<vector<int>> v(m);

    // vector<map<pair<int, int>, int>> mp;
    for (int i = 0; i < m; i++)
    {
        int l, r, value;
        cin >> l >> r >> value;
        v[i].push_back(l - 1);
        v[i].push_back(r - 1);
        v[i].push_back(value);
    }

    vector<int> diff_arry_for_increment(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        diff_arry_for_increment[x]++;
        diff_arry_for_increment[y + 1]--;
    }

    for (int i = 1; i < m; i++)
    {
        diff_arry_for_increment[i] += diff_arry_for_increment[i - 1];
    }

    vector<int> diffa(n + 2, 0);
    vector<int> pre_sum(n + 1);

    for (int i = 0; i < m; i++)
    {
        int l = v[i][0];
        int r = v[i][1];
        int val = v[i][2];

        diffa[l] += (diff_arry_for_increment[i] * val);
        diffa[r + 1] -= (diff_arry_for_increment[i] * val);
    }

    a[0] += diffa[0];
    for (int i = 1; i < n; i++)
    {
        diffa[i] = diffa[i] + diffa[i - 1];
        a[i] += diffa[i];
    }
    for (auto i : a)
        cout << i << " ";
}