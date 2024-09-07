#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (i == 0)
            {
                res = temp;
            }
            else
            {
                res = gcd(temp, res);
            }
        }
        cout << res << endl;
    }
}