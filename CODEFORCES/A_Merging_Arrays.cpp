#include <bits/stdc++.h>
using namespace std;
using vii = vector<int>;
auto scan = [](auto &x)
{for(auto &i:x) cin>>i; };
#define pb(x) push_back(x);

int main()
{
    int n, m;
    cin >> n >> m;
    vii frst(n), scnd(m), res;
    scan(frst);
    scan(scnd);

    int f = 0, s = 0, i = 0;
    while (f < n and s < m)
    {
        if (frst[f] < scnd[s])
        {
            res.pb(frst[f++]);
        }
        else
            res.pb(scnd[s++]);
    }

    while (f < n)
        res.pb(frst[f++]);

    while (s < m)
        res.pb(scnd[s++]);

    for (auto i : res)
        cout << i << " ";
}