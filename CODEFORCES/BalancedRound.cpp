#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        int res = 0, cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i + 1] - a[i]) > k)
            {

                res = max(res, cnt);
                cnt = 0;
            }
            else
                cnt++;
        }
        res = max(res, cnt);

        cout << n - res - 1 << endl;
    }
}