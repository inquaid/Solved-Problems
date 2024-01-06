#include <bits/stdc++.h>
using namespace std;

int myAry(int x);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        (max(a, b) == max(c, d) && (min(a, b) + min(c, d)) == max(a, b)) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}