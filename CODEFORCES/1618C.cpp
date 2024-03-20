#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve();
signed main()
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int result = 0;
    for (int i = 0; i < n; i += 2)
    {
        result = gcd(result, v[i]);
    }
    int result2 = 0;
    for (int i = 1; i < n; i += 2)
    {
        result2 = gcd(result2, v[i]);
    }
    bool ok = true;
    for (int i = 0; i < n; i += 2)
    {
        if (v[i] % result2 == 0)
            ok = false;
    }
    if (ok)
    {
        cout << result2 << endl;
        return;
    }
    ok = true;
    for (int i = 1; i < n; i += 2)
    {
        if (v[i] % result == 0)
            ok = false;
    }
    if (ok)
    {
        cout << result << endl;
        return;
    }
    cout << 0 << endl;
    // cout << result <<" "<< result2<< endl;
    // cout << result << endl;
    // if (result == 1 && result2==1)
    //     cout <<0<< endl;
    // else
    //     cout << max(result, result2) << endl;
}