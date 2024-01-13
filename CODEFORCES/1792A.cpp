#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, n, sum, temp;
    cin >> T;
    while (T--)
    {
        sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += (temp == 1);
        }

        cout << n - sum / 2 << endl;
    }
}