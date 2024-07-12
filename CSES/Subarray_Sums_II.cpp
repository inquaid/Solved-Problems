#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, temp, prev = 0, cnt = 0, i, need;
    cin >> n >> k;
    map<int, int> ump;
    ump[0]++;

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        prev += temp;

        need = prev - k;
        cnt += ump[need];
        ump[prev]++;
    }

    cout << cnt;
}