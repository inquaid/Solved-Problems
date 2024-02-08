#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve();

int main()
{
    flash;
    int k, x;
    cin >> k >> x;

    int n, left, right, a, b;
    vector<int> va, vb;
    while (k--)
    {

        cin >> a >> b;
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        va.push_back(a);
        vb.push_back(b);
    }
    sort(va.begin(), va.end(), greater<int>());
    sort(vb.begin(), vb.end());
    if (vb[0] < va[0])
    {
        cout << -1 << endl;
    }
    else if (x <= vb[0] && x >= va[0])
    {
        cout << 0 << endl;
    }
    else
    {
        cout << min(abs(x - va[0]), abs(x - vb[0]));
    }

    // cout << va[0] << " " << vb[0] << endl;

    return 0;
}
