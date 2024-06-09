#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r, res = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        for (int j = i + 1; j <= r; j++)
        {
            res = max(res, i ^ j);
        }
    }
    cout << res;
}