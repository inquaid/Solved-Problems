#include <bits/stdc++.h>
using namespace std;
#define flash                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    // // cout << endl;
    int first = 0, last = 0;
    int cnt1 = count(v.begin(), v.end(), 1);
    // cout<<cnt1<<endl;
    if (cnt1 == 1 || cnt1 == 0 || cnt1 == n)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            first = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            last = i;
            break;
        }
    }
    cnt1--;
    cout << (last - first) - cnt1 << endl;
}