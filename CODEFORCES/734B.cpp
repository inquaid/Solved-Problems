#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tw, th, f, s;
    cin >> tw >> th >> f >> s;
    int m = min({tw, f, s});
    int fi = 0;
    if (tw > m)
    {
        tw -= m;
        fi = min(tw, th);
    }

    cout << (256 * m) + (32 * fi) << endl;
}