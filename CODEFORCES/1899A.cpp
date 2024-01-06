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
        int a, i, cnt = 0;
        cin >> a;

        (a % 3 == 0) ? cout << "Second" : cout << "First";
        cout << endl;
    }

    return 0;
}