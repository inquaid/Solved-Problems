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
    int i = 0;
    while (true)
    {
        int n, temp, cnt = 0;
        cin >> n;
        if (!n)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp == 0)
            {
                cnt++;
            }
        }
        printf("Case %d: %d\n", ++i, n - cnt - cnt);
    }

    return 0;
}
