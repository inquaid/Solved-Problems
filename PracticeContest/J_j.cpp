#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

bool isEven(int n)
{
    return ((n & 1) == 0);
}

void solve();

int main()
{
    flash;
    int n, m, result = 0;
    cin >> n >> m;
    while (m > n)
    {
        if (isEven(m))
        {
            m /= 2;
        }
        else
            m++;

        result++;
    }
    cout << result + (n - m);

    return 0;
}
