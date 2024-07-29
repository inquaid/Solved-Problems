#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
vector<int> v;

int solve(int a, int b)
{
    int l = 0, r = v.size() - 1;
    int lft = v.size(), rgt = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] >= a)
        {
            lft = min(lft, mid);
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] <= b)
        {
            rgt = max(rgt, mid);
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    // return max(rgt - lft + 1, 0);
    if (lft <= rgt)
    {
        return rgt - lft + 1;
    }
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(all(v));

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << " ";
    }
}