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
    int n, k, sum = 0;
    cin >> n >> k;
    vector<int> v(n), V(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    for (auto &i : V)
    {
        cin >> i;
    }
    sort(V.rbegin(), V.rend());

    for (int i = 0; i < n; i++)
    {
        if (v[i] < V[i] && k-- > 0)
        {
            v[i] = V[i];
        }
        sum += v[i];
    }
    cout << sum << endl;
}