#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, i = 1;
    cin >> x >> y;

    while (y - i >= 0)
    {
        y -= i;
        i++;
        if (i > x)
        {
            i = 1;
        }
    }
    cout << y;
}