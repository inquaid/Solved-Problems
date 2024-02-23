#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
#define int long long

void solve();
bool isEven(int n)
{
    return !(n & 1);
}
int n, sum, temp, mx;
signed main()
{
    flash;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        mx = max(temp, mx);
    }
    if (isEven(sum) && mx * 2 <= sum)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}
