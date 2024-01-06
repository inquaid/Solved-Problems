#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int ary[m];
    for (int i = 0; i < m; i++)
    {
        cin >> ary[i];
    }
    sort(ary, ary + m);
    int ans = INT_MAX;
    
        for (int i = 0; i <= m - n; i++)
        {
            ans = min(ans, ary[i + n - 1] - ary[i]);
        }
        cout << ans << endl;
    
}