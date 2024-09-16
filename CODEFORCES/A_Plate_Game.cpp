#include <bits/stdc++.h>
using namespace std;
int a, b, r;

bool isPossible(int n_plates)
{
    int temp = n_plates * 4 * r * r;
    if (temp <= (a * b))
        return true;
    return false;
}

int main()
{
    cin >> a >> b >> r;
    if (b < (2 * r) or a < (2 * r))
    {
        cout << "Second";
        return 0;
    }

    int l = 1, r = 1;
    while (isPossible(r) == false)
    {
        r *= 2;
    }
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (isPossible(mid) == true)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    // cout << ans << " ";
    if (ans % 2 == 1)
    {
        cout << "First";
    }
    else
        cout << "Second";
}