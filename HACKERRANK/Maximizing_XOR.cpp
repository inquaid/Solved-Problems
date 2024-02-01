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
    int l, r, temp, mn = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        for (int j = l; j <= r; j++)
        {
            temp = i ^ j;
            mn = max(temp, mn);
        }
    }
    cout << mn;
    return 0;
}
