#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c, cnt = 0;
    cin >> n >> c;
    int ary[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if ((ary[i + 1] - ary[i]) <= c)
        {
            cnt++;
        }
        else
            cnt = 0;
    }
    cout << cnt + 1;
}