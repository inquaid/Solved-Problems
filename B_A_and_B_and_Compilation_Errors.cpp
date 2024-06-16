#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a = -1, b = -1;
    cin >> n;
    vector<int> u(n), v(n - 1), x(n - 2);
    for (auto &i : u)
        cin >> i;
    sort(u.begin(), u.end());
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (u[i] != v[i])
        {
            a = u[i];
            break;
        }
    }
    if (a == -1)
    {
        a = u[n - 1];
    }

    for (auto &i : x)
        cin >> i;
    sort(x.begin(), x.end());

    for (int i = 0; i < n - 2; i++)
    {
        if (x[i] != v[i])
        {
            b = v[i];
            break;
        }
    }
    if (b == -1)
    {
        b = v[n - 2];
    }
    cout << a << endl
         << b;
}