#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int res = 0;
        int start = max(1, (n - k + 1));
        res = (n + 1) / 2 - (start / 2);
        // for (int i = max(1, (n - k + 1)); i <= n; i++)
        // {
        //     // res += pow(i, i);
        //     if(i&1)res++;
        //     // cout << i << " ";
        // }
        // cout << res << endl;
        if (res & 1)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}