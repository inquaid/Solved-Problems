#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int res = 0;
    for (int i = 0; i < 32; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if ((v[j] >> i) & 1)
            {
                cnt++;
            }
        }
        // cout << cnt << " ";
        res +=( (1 << (i)) * (cnt%3));
    }
    cout << res;
}
