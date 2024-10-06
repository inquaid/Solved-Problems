#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
bool check(vi a, vi b, ll guessed_count, ll k)
{
    ll n = a.size(), cnt = 0, magicPowder = 0;
    for (ll i = 0; i < n; i++)
    {
        ll newA = a[i] * guessed_count;
        if (newA > b[i])
        {
            magicPowder += (newA - b[i]);
            if(magicPowder > k) return false;
        }
    }
    return magicPowder <= k;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vi a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    ll l = 0, r = 0, res = 0;

    for (ll i = 0; i < n; i++)
    {
        r = max(r, b[i] / a[i] + k / a[i]);
    }
    
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(a, b, mid, k))
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << res;
}