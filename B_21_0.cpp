#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        k--;
        vector<int> v(n), res;
        for (auto &i : v)
            cin >> i;
        res.push_back(v[0]);
        int k_day = v[0];
        for (int i = 1; i < k; i++)
        {
            cout << v[i] << " ";
            res.push_back(v[i] - v[i - 1]);
            k_day += v[i];
        }
        // k_day += v[k];
        res.push_back(v[k] - k_day);
        // k_day -= (v[k] + v[i]);
        v[k] -= v[k - 1];
        for (int i = k + 1; i < n; i++)
        {
            res.push_back(v[i] - v[i - 1]);
            v[i] -= v[i - 1];
            // k_day -= (v[i - k] + v[i]);
        }
        int cnt = 0;
        for (auto i : res)
        {
            // cout << i << " ";
            if (i <= 0)
            {
                cnt = 0;
            }
            else
                cnt++;
        }
        // cout<<endl;
        cout << cnt << endl;
    }
}