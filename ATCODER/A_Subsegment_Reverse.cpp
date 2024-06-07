#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int x = r;
    for (int i = 1; i <= n; i++)
    {

        while (i >= l && i <= r)
        {
            cout << x-- << " ";
            i++;
        }
        if (i <= n)
            cout << i << " ";
    }
}