#include <bits/stdc++.h>
using namespace std;
#define pb push_back
double n, k;
vector<double> v;

bool possible(double m)
{

    if (m == 0)
        return true;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (v[i] / m);
    }
    return ans >= k;
}

signed main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        double temp;
        cin >> temp;
        v.pb(temp);
    }
    double l = 0, r = 1e8, eps = 1e-7;
    cout << setprecision(7);
    double res = -1;
    while ((r - l) > eps)
    {
        double mid = l + (r - l) / 2;
        if (possible(mid))
        {
            l = mid;
            res = mid;
        }
        else
            r = mid;
    }
    cout << res;
}