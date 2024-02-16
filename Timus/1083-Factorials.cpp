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
    int n;
    string s;
    cin >> n >> s;
    int len = s.size();
    int result = n;
    while ((n - len) > 0)
    {

        result *= (n - len);
        n -= len;
    }

    cout << result;

    return 0;
}
