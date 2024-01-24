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
    int two, three, five, six;
    cin >> two >> three >> five >> six;

    int sum = min({two, five, six}) * 256;
    two -= min({two, five, six});
    sum += min(two, three) * 32;
    cout << sum << endl;

    return 0;
}
