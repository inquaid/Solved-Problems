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
    int n, k, temp, cnt = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    temp = 0;
    n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        // cout << v[i + 1] << " " << v[i] << "\t";
        if ((v[i + 1] - v[i]) <= k)
        {
            cnt++;
        }
        else
        {
            cnt++;
            temp = max(temp, cnt);
            cnt = 0;
            // cout << temp << " ";
        }

        // cout << endl;
    }
    cnt++;
    temp = max(temp, cnt);

    cout << n - temp << endl;
}