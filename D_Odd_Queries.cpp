#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), prex;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
                prex.push_back(a[i]);
            else
            {
                prex.push_back(prex[i - 1] + a[i]);
            }
        }
        int total = prex[n - 1], temp = 0;

        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            l--;
            r--;
            int sum = (r - l + 1) * k;
            if (l == 0)
            {
                temp = total - prex[r];
            }
            else
            {
                temp = total - (prex[r] - prex[l - 1]);
            }
            temp += sum;
            if (temp % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}