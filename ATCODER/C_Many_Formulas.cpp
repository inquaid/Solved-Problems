#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string s;
    cin >> s;
    // int n  = stoll(s);
    // cout<<n;
    int p = s.length();
    // cout << (s[0] - '0') + (s[1] - '0');
    int ttl_sum = 0;
    for (int i = 0; i < (1 << (p - 1)); i++)
    {
        string temp = "";
        int sum = 0;
        for (int j = 0; j < p; j++)
        {
            temp += s[j];
            if (((i >> j) & 1) || j == p - 1)
            {
                sum += stoll(temp);
                temp = "";
            }
        }
        ttl_sum += sum;
    }
    cout << ttl_sum;
}