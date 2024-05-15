#include <bits/stdc++.h>
using namespace std;

int t = -1;

int main()
{
    if (t == -1)
    {
        cin >> t;
    }
    if (t == 0)
    {
        return 0;
    }

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (max(a, b) > max(c, d) && min(a, b) > min(c, d) && max(c, d) > min(a, b))
        cout << "YES" << endl;
    else if (max(a, b) < max(c, d) && min(a, b) < min(c, d) && max(a, b) > min(c, d))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    t--;
    main();
}
