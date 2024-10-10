#include <bits/stdc++.h>
using namespace std;

vector<int> diff(200000 + 2000, 0);
int main()
{
    int n, k, q, mn = INT_MAX, mx = -1;
    cin >> n >> k >> q;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
        mn = min(mn, l);
        mx = max(mx, r + 1);
    }
    for (int i = mn; i <= mx; i++)
    {
        diff[i] += diff[i - 1];
    }

    for (int i = mn; i <= mx; i++)
    {
        // diff[i] += diff[i - 1];
        if (diff[i] < k)
            diff[i] = 0;
        else
            diff[i] = 1;
        diff[i] += diff[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        r = min(r, mx);
        if(l > mx) cout << 0 << endl;

        else if (l <= mn)
        {
            cout << diff[r] << endl;
        }
        else
            cout << (diff[r] - diff[l - 1]) << endl;
    }
}