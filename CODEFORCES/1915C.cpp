#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sqrt(ll x)
{
    ll low = 1;
    ll high = INT_MAX;

    while (high - low > 1)
    {
        ll midu = (low + high) / 2;

        if (midu * midu == x)
        {
            return midu;
        }
        else if (midu * midu < x)
        {
            low = midu;
        }
        else
        {
            high = midu;
        }
    }
    if (low * low == x)
    {
        return low;
    }
    else if (high * high == x)
    {
        return high;
    }
    return -1;
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    ll sum = accumulate(v.begin(), v.end(), 0ll);
    if (sqrt(sum) != -1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}