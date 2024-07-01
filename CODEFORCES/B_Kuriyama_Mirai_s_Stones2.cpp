#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), prex, sorted_prex;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            prex.push_back(a[i]);
        else
            prex.push_back(prex[i - 1] + a[i]);
    }
    // 2 2 4 6 7 7
    sort(a.begin(), a.end());
    sorted_prex.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        sorted_prex.push_back(sorted_prex[i - 1] + a[i]);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int m, l, r;
        cin >> m >> l >> r;
        l--;
        r--;
        if (m == 1)
        {
            if (l == 0)
                cout << prex[r] << endl;
            else
                cout << prex[r] - prex[l - 1] << endl;
        }
        else
        {
            if (l == 0)
                cout << sorted_prex[r] << endl;
            else
                cout << sorted_prex[r] - sorted_prex[l - 1] << endl;
        }
    }
}