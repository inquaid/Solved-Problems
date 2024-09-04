#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = a, res = INT_MAX;
        for (int i = a; i <= b; i++)
        {
            int temp = (c - a) + (b - c);
            res = min(res, temp);
        }
        cout << res << endl;
    }
}