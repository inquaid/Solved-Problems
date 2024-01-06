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
        int total = a + b + c;

        cout << (total % 2 == a % 2 ? "1 " : "0 ");
        cout << (total % 2 == b % 2 ? "1 " : "0 ");
        cout << (total % 2 == c % 2 ? "1\n" : "0\n");
    }
}
