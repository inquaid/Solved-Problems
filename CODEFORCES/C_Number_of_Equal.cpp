#include <bits/stdc++.h>
#define int long long
using namespace std;
using vii = vector<int>;

auto scan = [](auto &x)
{for(auto &i:x) cin >> i; };

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vii a(n), b(m);
    scan(a);
    scan(b);
    int i = 0, j = 0, cnt = 0;
    while (i < n and j < m)
    {
        if (a[i] == b[j])
        {

            int temp1 = 0, temp2 = 0, target = a[i];
            while (a[i] == target and i < n)
            {
                temp1++;
                i++;
            }
            while (b[j] == target and j < m)
            {
                temp2++;
                j++;
            }
            cnt += temp1 * temp2;
        }
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
            j++;
    }
    cout << cnt;
}