#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    set<string> s;
    if (a[1] == '>')
    {
        swap(a[0], a[2]);
        a[1] = '<';
    }

    if (b[1] == '>')
    {
        swap(b[0], b[2]);
        b[1] = '<';
    }

    if (c[1] == '>')
    {
        swap(c[0], c[2]);
        c[1] = '<';
    }

    if ((a[0] != b[0] && b[0] != c[0] && a[0] != c[0]) || a[2] != b[2] && b[2] != c[2] && a[2] != c[2])
    {
        cout << "Impossible\n";
        return 0;
    }
    if (a[0] == b[0])
        cout << a[0] << c[0] << c[2];
    if (a[0] == c[0])
        cout << a[0] << b[0] << b[2];
    if (b[0] == c[0])
        cout << b[0] << a[0] << a[2];
    cout << endl;
}