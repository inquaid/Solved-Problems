#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int solve(int target)
{
    int l = 0, r = v.size() - 1;
    int ans = r + 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] >= target)
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans + 1;
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
        cout << solve(temp) << endl;
    }
}