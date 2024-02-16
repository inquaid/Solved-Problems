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
    double n, m, a;
    cin >> n >> m >> a;
    cout << (long long)(ceil(n / a) * ceil(m / a));

    return 0;
}
