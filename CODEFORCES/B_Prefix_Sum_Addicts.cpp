#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve();
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}

void solve()
{
    int n, k, temp;
    cin >> n >> k;
    vector<int> v(k), a;
    for (int i = 0; i < k; i++)
    {
        cin >> temp;
        v[i] = temp;
        if (i == 0)
            a.push_back(temp);
        else
            a.push_back(temp - v[i - 1]);
    }
    if (k == 1)
    {
        cout << "Yes";
        return;
    }
    if (is_sorted(a.begin() + 1, a.end()) == false)
    {
        cout << "No";
        return;
    }

    int res = floor(a[0] / (n - k + 1));
    if (a[0] >= 0 && (a[0] % (n - k + 1)) != 0)
        res++;
    if (res <= a[1])
    {
        cout << "Yes";
    }
    else
        cout << "No";
}