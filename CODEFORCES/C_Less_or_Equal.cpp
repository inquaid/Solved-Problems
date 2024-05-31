#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    if (k == 0)
        if (v[0] != 1)
            cout << 1;
        else
            cout << -1;

    else if (n == 1)
        if (v[0] == 1)
            cout << -1;
        else
            cout << v[0];

    else if (v[k] == v[k - 1] || k > n)
        cout << -1;

    else
        cout << v[k - 1];
}