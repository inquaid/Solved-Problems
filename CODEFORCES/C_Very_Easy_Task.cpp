#include <bits/stdc++.h>
using namespace std;

int n, x, y;

bool possible(int k)
{
    if (k < min(x, y))
        return false;
    int ans = (k - min(x, y)) / x + (k - min(x, y)) / y + 1;
    return ans >= n;
}

int main()
{
    cin >> n >> x >> y;
    // if (x > y)
    //     swap(x, y);

    int l = 0, r = 1;
    while (possible(r) == false)
    {
        r *= 2;
    }
    int ans = INT_MAX;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (possible(mid))
        {

            r = mid - 1;
            ans = min(ans, mid);
        }
        else
            l = mid + 1;
    }
    cout << ans;
}