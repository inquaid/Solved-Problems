#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        vector<int> vv(n);
        for (auto &p : vv)
        {
            cin >> p;
        }
        long long maxx = 0;
        for (int i = 1; i < n; i++)
        {
            maxx = max(maxx, 1LL * vv[i] * vv[i - 1]);
        }
        cout << maxx << endl;
    }

    return 0;
}