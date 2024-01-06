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
        int n, sum = 0;
        cin >> n;
        int ary[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ary[i];
            sum += ary[i];
        }
        printf("%d\n", (sum % n == 0) ? 0 : 1);
    }
}