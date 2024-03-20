#include <bits/stdc++.h>
using namespace std;
#define int long long

int pow(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans = ans * a;
        a = a * a;
        b >>= 1;
    }
    return ans;
}

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
    }
}
void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    if (pow(floor(sqrt(sum)), 2) == sum)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}