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
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n, sum = 0, temp, zero = 0, one = 0, gtr = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
        if (temp == 0)
        {
            zero++;
        }
        if (temp == 1)
        {
            one++;
        }
        if (temp > 1)
        {
            gtr = 1;
        }
    }
    int non_zero = n - zero;
    // cout<<non_zero<<" ";

    if (zero > non_zero + 1)
    {
        if (one == 0)
            cout << 1 << endl;
        else
        {
            if (gtr)
            {
                cout << 1 << endl;
            }
            else
                cout << 2 << endl;
        }
    }
    else
        cout << 0 << endl;
}