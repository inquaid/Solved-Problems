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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cin >> (*it);
    }
    sort(v.begin(), v.end());
    cout << (v[n - 1] - v[0]) * 2 << endl;
}