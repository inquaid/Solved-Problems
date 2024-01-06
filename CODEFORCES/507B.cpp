#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;

    double d = sqrt(pow((x - x1), 2) + pow((y - y1), 2));
    int re = ceil(d / (2 * r));
    cout << re;
}