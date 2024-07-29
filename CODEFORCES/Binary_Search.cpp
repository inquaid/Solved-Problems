#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int bin_srch(int l, int r, int target)
{
    if (l > r)
        return 0;
    int mid = l + (r - l) / 2;
    if (v[mid] == target)
        return 1;
    else if (v[mid] < target)
    {
        return bin_srch(mid + 1, r, target);
    }
    else
        return bin_srch(l, mid - 1, target);
}

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        if (bin_srch(0, n - 1, temp))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}