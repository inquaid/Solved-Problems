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
        cout << ((a <= 7) ? 1 : a / 7 + 1);
        cout << endl;
    }
}