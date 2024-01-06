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
        if (a == 2)
        {
            cout << 2;
        }
        else
        {
            cout << (a % 2 == 0 ? 0 : 1);
        }
        cout << endl;
    }
}