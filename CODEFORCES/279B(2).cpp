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
    int n, t, sum = 0, result = 0, index = 0;
    cin >> n >> t;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    for (int i = 0; i < n; i++)
    {

        while (index < n && sum + v[index] <= t)
        {
            sum += v[index];
            index++;
        }

        result = max(result, index - i);
        sum -= v[i];
    }
    cout << result;

    return 0;
}
