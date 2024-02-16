#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    flash;
    double h, a;
    cin >> h >> a;
    if (h < a)
    {
        cout << 1;
        return 0;
    }
    cout << ceil(h / a);

    return 0;
}
