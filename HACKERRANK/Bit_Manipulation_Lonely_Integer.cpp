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

    int n, temp, result = 0;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        result ^= temp;
    }
    cout << result;

    return 0;
}
