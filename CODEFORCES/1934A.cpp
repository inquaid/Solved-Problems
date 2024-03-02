#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
void solve()
{
    int n, mx = INT_MIN;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    // for (auto i : v)
    //     cout << i << " ";
    // cout << endl;
    int result = 0;
    result += abs(v[0] - v[n - 1]);
    result += abs(v[1] - v[n - 2]);
    result += abs(v[0] - v[n - 2]);
    result += abs(v[1] - v[n - 1]);
    cout << result << endl;
}
