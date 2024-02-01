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
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            n = i;
        }
    }
}
