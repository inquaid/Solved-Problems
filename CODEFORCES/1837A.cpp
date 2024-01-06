#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 2 << endl
                 << 1 << " " << a - 1 << endl;
        }
        else
            cout << 1 << endl
                 << a << endl;
    }
}