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
    int n, a, b, sum = 0;
    cin >> n;
    vector<int> v(2 * n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 2 * n; i += 2)
    {
        sum += min(v[i], v[i + 1]);
    }

    cout << sum << endl;
}