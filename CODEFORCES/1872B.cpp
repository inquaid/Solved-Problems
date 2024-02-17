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
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, a, b, result = INT_MAX, cnt = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cnt = a + ceil(b / 2.0) - 1;
        result = min(cnt, result);
    }

    cout << result << endl;
}