#include <bits/stdc++.h>
using namespace std;
// #define int long long
void solve();
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
        cout << endl;
    }
}
void solve()
{
    int n, temp;
    cin >> n;
    vector<int> v;
    int mid = ceil(n / 2.0);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    // cout<<mid;
    // return;
    sort(v.begin(), v.end());
    mid--;
    int cnt = 0;
    for (int i = mid; i < n; i++)
    {
        if (v[i] == v[mid])
            cnt++;
        else
            break;
    }
    cout << cnt;
}