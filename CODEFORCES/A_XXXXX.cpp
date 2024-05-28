#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, cnt = 0, sum = 0;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % x == 0)
                cnt++;
            sum += v[i];
        }
        if (sum % x != 0)
        {
            cout << n << endl;
        }
        else if (cnt == n)
        {
            cout << -1 << endl;
        }
        else
        {
            int l = 0, r = n - 1;
            while (l < n && v[l] % x == 0)
                l++;
            while (r >= 0 && v[r] % x == 0)
                r--;
            cout << n - min(l + 1, n - r) << endl;
        }
    }
}