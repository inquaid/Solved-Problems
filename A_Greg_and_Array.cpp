#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }

    int store[n + 1] = {0};
    int q, l, r, d;
    cin >> q;
    while (q--)
    {
        cin >> l >> r >> d;
        store[l] += d;
        store[r + 1] -= d;
    }

    int prex_ary[n + 1];
    prex_ary[0] = store[0];
    for (int i = 1; i < n + 1; i++)
    {
        prex_ary[i] = prex_ary[i - 1] + store[i];
    }

    for (int i = 0; i < n; i++)
    {
        ary[i] = prex_ary[i] + ary[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ary[i] << " ";
    }
    cout << endl;
}
