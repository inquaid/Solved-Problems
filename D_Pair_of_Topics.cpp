#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    // vector<int> v{-2, -1, 0, 3, 5};
    // cout << lower_bound(v.begin(), v.end(), -3 + 1) - v.begin() << endl;
    // cout << upper_bound(v.begin(), v.end(), -3 + 1) - v.begin() << endl;
    // return 0;
    int n;
    cin >> n;
    vector<int> a(n), v(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v[i] = a[i] - temp;
    }
    sort(v.begin(), v.end());

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        if (v[i] <= 0) continue;

             temp = lower_bound(v.begin(), v.end(), -1 * v[i] + 1) - v.begin();
        // else
        //      temp = lower_bound(v.begin(), v.end(),  v[i]) - v.begin();

        // cout << temp << " ";
        cnt += (i - temp);
    }
    cout << cnt;
}