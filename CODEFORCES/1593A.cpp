#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int f = max({a, b, c}), g = (a + b + c) - max({a, b, c}) - min({a, b, c});
        if (f - g == 0)
        {

            cout << f - a + 1 << " " << f - b + 1 << " " << f - c + 1 << endl;
        }
        else
        {
            if (a == f)
            {
                a++;
            }
            if (b == f)
            {
                b++;
            }
            if (c == f)
            {
                c++;
            }

            cout << f - a + 1 << " " << f - b + 1 << " " << f - c + 1 << endl;
        }
    }
}