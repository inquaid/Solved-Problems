#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    // flash;
    int n, k, result = INT_MAX, sum, temp, ans = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    result = sum;
    ans = 0;

    for (int i = k; i < n; i++)
    {
        sum -= v[i - k];
        sum += v[i];
        if (sum < result)
        {
            result = sum;
            ans = i - k + 1;
        }
    }

    cout << ans + 1;
    return 0;
}
