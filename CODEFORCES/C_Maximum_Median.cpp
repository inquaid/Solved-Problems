#include <bits/stdc++.h>
using namespace std;
// #define int long long

int n, k;
vector<int> v;

bool check(int x)
{
    int val = 0;
    for (int i = (n / 2); i < n; i++)
    {
        val += max(0, x - v[i]);
        if (val > k)
            return false;
    }
    return true;
}

signed main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    int i = 1, j = 2000000000, res = 0;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (check(mid))
        {
            i = mid + 1;
            res = max(res, mid);
        }
        else
        {
            j = mid - 1;
        }
    }
    cout << res;
}