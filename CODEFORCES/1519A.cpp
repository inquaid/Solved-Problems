#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   unsigned long long t;
    cin >> t;
    while (t--)
    {
       unsigned long long r, b, d, x, y;
        cin >> r >> b >> d;

        x = min(r, b);
        y = max(r, b) - x;
        (y > (x * d)) ? cout << "NO" : cout << "YES";

        cout << endl;
    }

    return 0;
}