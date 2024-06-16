#include <bits/stdc++.h>
using namespace std;

void res(int meliodas, int ban)
{
    if (meliodas == ban || meliodas == 0 || ban == 0)
    {
        cout << meliodas + ban << endl;
        return;
    }
    if (ban % meliodas == 0)
    {
        cout << meliodas * 2 << endl;
        return;
    }
    if (meliodas % ban == 0)
    if (meliodas % ban == 0)
    {
        cout << ban * 2 << endl;
        return;
    }

    if (meliodas > ban)
    {
        res(meliodas % ban, ban);
    }
    else
        res(meliodas, ban % meliodas);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        res(a, b);
    }
}