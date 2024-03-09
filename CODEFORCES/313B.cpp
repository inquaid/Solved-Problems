#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    string s;
    cin >> s;
    int n, l, r;
    cin >> n;
    int ln = s.size();
    vector<int> v(ln, 0);

    for (int i = 1; i < ln; i++)
    {
        v[i] = v[i - 1];
        if (s[i] == s[i - 1])
        {
            v[i]++;
        }
    }

    while (n--)
    {
        cin >> l >> r;

        l;
        r--;
        int result = v[r] - (l > 0 ? v[l - 1] : 0);
        cout << result << endl;
    }
}
