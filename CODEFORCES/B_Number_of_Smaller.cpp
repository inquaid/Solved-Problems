#include <bits/stdc++.h>

using namespace std;
using vii = vector<int>;

auto scan = [](auto &x)
{for(auto &i : x) cin>>i; };

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vii frst(n), lst(m);
    scan(frst);
    scan(lst);

    int index = 0, f = 0, l = 0, cnt = 0;
    while (f < n and l < m)
    {
        if (frst[f] < lst[l])
        {
            cnt++;
            f++;
        }
        else
        {
            cout << cnt << " ";
            // cnt=0;
            l++;
        }
    }
    while (l < m)
    {
        cout << cnt << " ";
        l++;
    }
}