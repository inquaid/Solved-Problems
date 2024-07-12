#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int res = 0, prev = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (i != 0 && temp < prev)
            {
                res += (prev - temp);
            }
            prev = temp;
        }
        cout << res << endl;
    }
}