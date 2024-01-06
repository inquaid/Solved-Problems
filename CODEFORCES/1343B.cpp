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
        int a;
        cin >> a;
        if (a % 2 == 0 && (a / 2) % 2 == 0)
        {
            cout << "YES" << endl;
            int sum = 0;
            for (int i = 1; i <= a / 2; i++)
            {
                cout << 2 * i << " ";
                sum += 2 * i;
            }
            for (int i = 1; i < a / 2; i++)
            {
                cout << (2 * i) - 1 << " ";
                sum -= (2 * i) - 1;
            }
            cout << sum << endl;
        }
        else
            cout << "NO" << endl;
    }
}