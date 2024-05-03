#include <bits/stdc++.h>

using namespace std;

int mex(vector<int> v)
{

    sort(v.begin(), v.end());
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] != (i))
        {
            return i;
        }
    }
    return n;
}

void solve();
int main()
{
    // vector<int> v(10);
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> v[i];
    // }
    // cout << mex(v);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[j] = mex(v);
        }
    }
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}