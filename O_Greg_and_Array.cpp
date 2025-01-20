#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> v[m];
    for (int i = 0; i < m; i++)
    {
        int l, r, val;
        cin >> l >> r >> val;
        l--;
        r--;
        v[i].push_back(l);
        v[i].push_back(r);
        v[i].push_back(val);
    }

    vector<int> diff(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        diff[l]++;
        diff[r+1]--;
    }
    // cout << diff[0] << " ";
    for (int i = 1; i < m; i++)
    {
        diff[i] += diff[i - 1];
        // cout << diff[i] << " ";
    }

    vector<int> diff2(n + 2, 0);
    for (int i = 0; i < m; i++)
    {
        int l = v[i][0];
        int r = v[i][1];
        int val = v[i][2] * diff[i];
        diff2[l] += val;
        diff2[r+1] -= val;
    }
    // cout << diff2[0] << " ";
    a[0] += diff2[0];
    // cout << a[0] << " ";
    for (int i = 1; i < n; i++)
    {
        diff2[i] += diff2[i - 1];
        a[i] += diff2[i];
        // cout << a[i] << " ";
        // cout << diff2[i] << " ";
    }
    for (auto i : a)
        cout << i << " ";

}