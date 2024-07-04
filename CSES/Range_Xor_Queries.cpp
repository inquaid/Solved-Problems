#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> x(n), prex;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (i == 0)
            prex.push_back(x[i]);
        else
            prex.push_back(x[i] ^ prex[i - 1]);
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        if (l == 0)
            cout << prex[r] << endl;
        else
            cout << (prex[r] ^ prex[l - 1]) << endl;
    }
}