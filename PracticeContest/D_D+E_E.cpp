#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
void solve();

signed main()
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
    int n, temp, zero = 0, result = 0;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > 0)
            pq.push(temp);
        else if (temp == 0 && !pq.empty())
        {
            result += pq.top();
            pq.pop();
        }
    }

    cout << result << endl;
}
