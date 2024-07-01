#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n), prex;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    // for (auto i : prex)cout << i << " ";
    int sum = 0, cnt = 0, tail = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];

        // while (sum == x && tail <= i) {
        // 	cnt++;
        // 	sum -= a[tail];
        // 	tail++;
        // }

        while (sum > x && tail <= i)
        {
            sum -= a[tail];
            tail++;
        }
        while (sum == x)
        {
            // cout << i << " ";
            cnt++;
        }
    }
    while (tail < n)
    {
        sum += a[tail];
        tail++;
        if (sum == x)
            cnt++;
    }
    cout << cnt << endl;
}