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

    // return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> ary(n), arr(n);
    for (auto &i : ary)
    {
        cin >> i;
    }
    for (auto &i : arr)
    {
        cin >> i;
    }
    cout << arr[0] - ary[0] << " ";
    for (int i = 1; i < n; i++)
    {
        if (ary[i] > arr[i - 1])
        {
            cout << arr[i] - ary[i] << " ";
        }
        else
            cout << arr[i] - arr[i - 1] << " ";
    }
    cout << endl;
}