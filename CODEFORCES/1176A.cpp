#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        long long a, cnt2 = 0, cnt3 = 0, cnt5 = 0;
        cin >> a;
        while (a % 2 == 0)
        {
            a /= 2;
            ++cnt2;
        }
        while (a % 3 == 0)
        {
            a /= 3;
            ++cnt3;
        }
        while (a % 5 == 0)
        {
            a /= 5;
            ++cnt5;
        }

        (a != 1) ? cout << -1 : cout << cnt2 + cnt3 * 2 + cnt5 * 3;

        cout << endl;
    }

    return 0;
}