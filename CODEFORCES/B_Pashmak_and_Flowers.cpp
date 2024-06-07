#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    int mx = v[n - 1], mn = v[0], cnt_mx = 0, cnt_mn = 0, i = n - 1;
    while (v[i] == mx)
    {
        cnt_mx++;
        i--;
    }
    cout << mx - mn << " ";
    i = 0;
    while (v[i] == mn)
    {
        cnt_mn++;
        i++;
    }
    if (mx == mn)
    {
        cout << n * (n - 1) / 2;
    }
    else
    {
        cout << cnt_mn * cnt_mx;
    }
}