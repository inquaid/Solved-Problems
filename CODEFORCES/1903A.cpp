#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ary(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
        }
        int cnt = 0;

        if (!is_sorted(ary.begin(), ary.end()) && k == 1)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}