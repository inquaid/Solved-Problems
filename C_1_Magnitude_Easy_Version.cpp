#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0, res = 0, carry = 0, ps = 0, ng = 0;
        cin >> n;
        vector<int> v(n), pos, neg;
        // int v[n];
        map<int, int> mp;
        for (auto &i : v)
        {
            cin >> i;
        }
        for (int i = 0; i < n; i++)
        {
            // if (v[i] > 0)
            {
                ps = ps + v[i];
                pos.push_back(ps);
            }

            // else
            {
                ng = abs(ng + v[i]);
                neg.push_back(ng);
            }
            if (abs(ps) != abs(ng))
            {
                int mx = max(abs(ps), abs(ng));
                ps = mx;
                ng = mx;
            }
        }
        // res+=carry;
        res = abs(res - carry);
        cout << "pos-> ";
        for (auto i : pos)
            cout << i << " ";
        cout << "\nneg-> ";
        for (auto i : neg)
            cout << i << " ";
        // res = max(abs(res - carry), carry);

        cout << endl;
    }
}