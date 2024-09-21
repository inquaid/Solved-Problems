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
        int robin_has = 0;
        int temp, res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp >= k)
            {
                robin_has += temp;
            }
            if (temp == 0 and robin_has)
            {
                res++;
                robin_has--;
            }
        }
        cout << res << endl;
    }
}