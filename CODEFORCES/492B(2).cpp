#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

signed main()
{
    flash;
    double n, l, temp;
    cin >> n >> l;
    vector<double> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    double max_distance = max(v[0], l - v[n - 1]);

    for (int i = 0; i < n - 1; i++)
    {
        temp = abs(v[i] - v[i + 1]);
        max_distance = max(temp / 2.0, max_distance);
    }
    cout << fixed << setprecision(10) << max_distance;
    return 0;
}
